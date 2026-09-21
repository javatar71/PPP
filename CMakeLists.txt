cmake_minimum_required(VERSION 3.20)

project(PPP)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(TASK_test test)
add_executable(${TASK_test} ${TASK_1}/main.cpp)
set_target_properties(${TASK_test} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "bin/${TASK_test}"
)
