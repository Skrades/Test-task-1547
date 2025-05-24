cmake_minimum_required(VERSION 3.12)

set(EXAMPLE_PROJECT Example)

add_executable(${EXAMPLE_PROJECT}
    main.cpp
)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/text.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(${EXAMPLE_PROJECT} SceneCreator)
target_compile_features(${EXAMPLE_PROJECT} PUBLIC cxx_std_17)

set_target_properties(${EXAMPLE_PROJECT} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)