cmake_minimum_required(VERSION 3.12)

set(EXAMPLE_PROJECT Example)

add_executable(${EXAMPLE_PROJECT}
    main.cpp
)

add_custom_command(
    TARGET ${EXAMPLE_PROJECT} PRE_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_CURRENT_SOURCE_DIR}/Input.txt
        ${CMAKE_CURRENT_BINARY_DIR}/Input.txt
)

target_link_libraries(${EXAMPLE_PROJECT} SceneCreator)
target_compile_features(${EXAMPLE_PROJECT} PUBLIC cxx_std_17)

set_target_properties(${EXAMPLE_PROJECT} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)