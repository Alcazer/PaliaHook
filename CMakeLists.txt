cmake_minimum_required(VERSION 3.6)
project(PaliaHook CXX)
enable_language(C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    add_compile_options(/MP)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

# Detours
file(GLOB DETOURS_SOURCES detours/*.cpp)
file(GLOB DETOURS_HEADERS detours/*.h)
add_library(detours STATIC ${DETOURS_SOURCES} ${DETOURS_HEADERS})
target_include_directories(detours PUBLIC detours)

# ImGUI
file(GLOB IMGUI_SOURCES ImGui/*.cpp ImGui/impls/*.cpp)
file(GLOB IMGUI_HEADERS ImGui/*.h ImGui/impls/*.h)
if(WIN32)
    file(GLOB IMGUI_PLATFORM_SOURCES ImGui/impls/windows/*.cpp)
    file(GLOB IMGUI_PLATFORM_HEADERS ImGui/impls/windows/*.h)
elseif(UNIX AND NOT APPLE)
    file(GLOB IMGUI_PLATFORM_SOURCES ImGui/impls/linux/*.cpp)
    file(GLOB IMGUI_PLATFORM_HEADERS ImGui/impls/linux/*.h)
endif()
list(APPEND IMGUI_SOURCES ${IMGUI_PLATFORM_SOURCES})
list(APPEND IMGUI_HEADERS ${IMGUI_PLATFORM_HEADERS})

add_library(imgui STATIC ${IMGUI_SOURCES} ${IMGUI_HEADERS})
target_include_directories(imgui PUBLIC ImGui glew/include)
target_compile_definitions(imgui PRIVATE IMGUI_DEFINE_MATH_OPERATORS $<$<BOOL:${WIN32}>:GLEW_STATIC>)

# RendererHook
file(GLOB_RECURSE RENDERERHOOK_SOURCES RendererHook/*.cpp)
file(GLOB_RECURSE RENDERERHOOK_HEADERS RendererHook/*.h)
add_library(RendererHook STATIC ${RENDERERHOOK_SOURCES} ${RENDERERHOOK_HEADERS})
target_include_directories(RendererHook PUBLIC RendererHook glew/include)
target_compile_definitions(RendererHook PRIVATE $<$<BOOL:${WIN32}>:GLEW_STATIC>)
target_link_libraries(RendererHook PUBLIC detours imgui)

# PaliaSDK
file(GLOB_RECURSE PALIASDK_SOURCES PaliaSDK/*.cpp)
file(GLOB_RECURSE PALIASDK_HEADERS PaliaSDK/*.hpp)
add_library(PaliaSDK STATIC ${PALIASDK_SOURCES} ${PALIASDK_HEADERS})
target_include_directories(PaliaSDK PUBLIC PaliaSDK)
target_precompile_headers(PaliaSDK PRIVATE PaliaSDK/SDK.hpp)

# PaliaHook DLL
if(EXISTS "${CMAKE_BINARY_DIR}/PaliaHook.pdb")
   file(REMOVE ${CMAKE_BINARY_DIR}/PaliaHook.pdb)
endif()
file(GLOB_RECURSE PALIAHOOK_SOURCES PaliaHook/*.cpp)
file(GLOB_RECURSE PALIAHOOK_HEADERS PaliaHook/*.h)
file(GLOB GLEW_SOURCES glew/src/glew.c)
set_source_files_properties(${GLEW_SOURCES} PROPERTIES LANGUAGE C)
add_library(PaliaHook SHARED ${PALIAHOOK_SOURCES} ${PALIAHOOK_HEADERS} ${GLEW_SOURCES})
target_compile_definitions(PaliaHook PRIVATE $<$<BOOL:${WIN32}>:GLEW_STATIC>)
target_link_libraries(PaliaHook PRIVATE RendererHook PaliaSDK $<$<BOOL:${WIN32}>:ws2_32> $<$<BOOL:${WIN32}>:iphlpapi> $<$<BOOL:${WIN32}>:opengl32.lib> $<$<BOOL:${WIN32}>:Winmm.lib>)