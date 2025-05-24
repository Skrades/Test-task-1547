cmake_minimum_required(VERSION 3.12)

project(2DScene)

add_subdirectory(Objects)
add_subdirectory(SceneCreator)
add_subdirectory(Example)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Example)