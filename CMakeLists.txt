# general info  
cmake_minimum_required(VERSION 3.30)  
set(PROJECT_NAME Engine)  
project(${PROJECT_NAME} VERSION 1.0.0)  
message ("----------------Project File Generation for ${PROJECT_NAME}----------------- ")  

# cpp options  
set(CMAKE_CXX_STANDARD 20)  
set(CMAKE_CXX_STANDARD_REQUIRED True)  

# DirectXTK  
include(FetchContent)  

FetchContent_Declare(  
    DirectXTK  
    GIT_REPOSITORY https://github.com/microsoft/DirectXTK  
    GIT_TAG main  
)  

# Load DirectXTK 
FetchContent_MakeAvailable(DirectXTK)  

# source 
set(PROJECT_FOLDERS Source/App Source/Drawable Source/ErrorHandle Source/Graphics Source/Images Source/Imgui Source/Macros Source/Math Source/Shaders Source/Utilities Source/Vertex Source/Window Source/Resource Source/Graphics/Bindable)  
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

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")

add_executable(${PROJECT_NAME} WIN32 ${SOURCE_FILES})  

 
target_include_directories(${PROJECT_NAME} PRIVATE   
    ${directxtk_SOURCE_DIR}/Inc  
)  

 
target_link_libraries(${PROJECT_NAME} PRIVATE   
    DirectXTK  
)  

message ("-------Project Files Generated--------")  