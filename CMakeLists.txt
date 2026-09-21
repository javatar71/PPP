cmake_minimum_required(VERSION 3.20)

project(PPP)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(TASK test)
add_executable(${TASK} ${TASK}/main.cpp)
set_target_properties(${TASK} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "bin/${TASK}"
)

set(PART part1)
set(CHAPTER chap1)
set(TASK 01_01_01)
add_executable(${TASK} ${PART}/${CHAPTER}/${TASK}/main.cpp)
set_target_properties(${TASK} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "bin/${PART}/${CHAPTER}/${TASK}"
)

set(CHAPTER chap2)
set(TASK 01_02_tt1)
add_executable(${TASK} ${PART}/${CHAPTER}/${TASK}/main.cpp)
set_target_properties(${TASK} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "bin/${PART}/${CHAPTER}/${TASK}"
)

set(CHAPTER chap2)
set(TASK 01_02_tt2)
add_executable(${TASK} ${PART}/${CHAPTER}/${TASK}/main.cpp)
set_target_properties(${TASK} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "bin/${PART}/${CHAPTER}/${TASK}"
)

set(CHAPTER chap2)
set(TASK 01_02_tt3)
add_executable(${TASK} ${PART}/${CHAPTER}/${TASK}/main.cpp)
set_target_properties(${TASK} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "bin/${PART}/${CHAPTER}/${TASK}"
)

set(CHAPTER chap2)
set(TASK 01_02_tt4)
add_executable(${TASK} ${PART}/${CHAPTER}/${TASK}/main.cpp)
set_target_properties(${TASK} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "bin/${PART}/${CHAPTER}/${TASK}"
)
