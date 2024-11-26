cmake_minimum_required(VERSION 3.30)

project(Engine)

set(CXX_STANDARD 20)

set(PROJECT_FOLDERS Source/App Source/Drawable Source/ErrorHandle Source/Graphics Source/Images Source/Imgui Source/Macros Source/Math Source/Shaders Source/Utilities Source/Vertex Source/Window Source/Resource)

foreach(FOLDER ${PROJECT_FOLDERS})
    file(GLOB FOLDER_FILES "${CMAKE_SOURCE_DIR}/${FOLDER}/*.cpp" "${CMAKE_SOURCE_DIR}/${FOLDER}/*.h")
    set(SOURCE_FILES ${SOURCE_FILES} ${FOLDER_FILES})
endforeach()

include_directories(
    ${CMAKE_SOURCE_DIR}/Source/App
    ${CMAKE_SOURCE_DIR}/Source/Drawable
    ${CMAKE_SOURCE_DIR}/Source/ErrorHandle
    ${CMAKE_SOURCE_DIR}/Source/Graphics
    ${CMAKE_SOURCE_DIR}/Source/Images
    ${CMAKE_SOURCE_DIR}/Source/Imgui
    ${CMAKE_SOURCE_DIR}/Source/Macros
    ${CMAKE_SOURCE_DIR}/Source/Math
    ${CMAKE_SOURCE_DIR}/Source/Shaders
    ${CMAKE_SOURCE_DIR}/Source/Utilities
    ${CMAKE_SOURCE_DIR}/Source/Vertex
    ${CMAKE_SOURCE_DIR}/Source/Window
    ${CMAKE_SOURCE_DIR}/Source/Resource
)

add_executable(Engine ${SOURCE_FILES})

message ("-------Preject Files Generated--------")