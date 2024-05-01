cmake_minimum_required(VERSION 3.10)

project(flyingfrog VERSION 0.1)

set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/src)

file(GLOB_RECURSE HEADERS ${PROJECT_HEADERS_DIR}/*.h)
file(GLOB_RECURSE SOURCES ${PROJECT_SOURCES_DIR}/*.cpp)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

add_subdirectory(libs/drogon)
target_link_libraries(${PROJECT_NAME} PRIVATE drogon)

include_directories(${PROJECT_HEADERS_DIR})
