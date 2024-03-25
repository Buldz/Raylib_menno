cmake_minimum_required(VERSION 3.5)
project(main C CXX)

set(CMAKE_CXX_STANDARD 17)

# Setting parameters for OpenGL
set(OpenGL_GL_PREFERENCE GLVND)

# Setting parameters for raylib
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games

add_subdirectory(libs/raylib)

set(WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB SOURCES "${WORKING_DIRECTORY}/framework/src/*.cpp" "${WORKING_DIRECTORY}/project/src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${WORKING_DIRECTORY}/framework/headers ${WORKING_DIRECTORY}/project/headers) 

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

file(COPY assets/ DESTINATION ${CMAKE_BINARY_DIR})

