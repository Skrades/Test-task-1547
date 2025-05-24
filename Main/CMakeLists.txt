cmake_minimum_required(VERSION 3.12)

set(MAIN_PROJECT Main)

add_executable(${MAIN_PROJECT} main.cpp)

target_link_libraries(${MAIN_PROJECT} Objects)
target_compile_features(${MAIN_PROJECT} PUBLIC cxx_std_17)

set_target_properties(${MAIN_PROJECT} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)