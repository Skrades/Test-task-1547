cmake_minimum_required(VERSION 3.12)

set(CREATOR_PROJECT SceneCreator)

add_library(${CREATOR_PROJECT} STATIC 
    include/SceneCreator.hpp 
    src/SceneCreator.cpp
    include/Bitmap.hpp
    src/Bitmap.cpp
)

target_link_libraries(${CREATOR_PROJECT} Objects)
target_include_directories(${CREATOR_PROJECT} PUBLIC include)
target_compile_features(${CREATOR_PROJECT} PUBLIC cxx_std_17)