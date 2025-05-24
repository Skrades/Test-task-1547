cmake_minimum_required(VERSION 3.12)

set(OBJECTS_PROJECT Objects)

set(INCLUDES
    include/Object.hpp
    include/Point.hpp
    include/Rect.hpp
    include/HLine.hpp
    include/VLine.hpp
    include/Frame.hpp
    include/Line.hpp
    include/Triangle.hpp
)

set(SOURCES
    src/Object.cpp
    src/Point.cpp
    src/Rect.cpp
    src/HLine.cpp
    src/VLine.cpp
    src/Line.cpp
    src/Triangle.cpp
)

add_library(${OBJECTS_PROJECT} STATIC ${INCLUDES} ${SOURCES})
target_include_directories(${OBJECTS_PROJECT} PUBLIC include)
target_include_directories(${OBJECTS_PROJECT} PRIVATE src)
target_compile_features(${OBJECTS_PROJECT} PUBLIC cxx_std_17)