cmake_minimum_required(VERSION 3.14)
project(CPPManagerSystem)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)

find_package(Qt5Widgets REQUIRED)

add_executable(myqtproject ${SOURCE_FILES})

add_executable(CPPManagerSystem main.cpp SystemBase.h Person.h Student.h Teacher.h BaseUtils.h ViewUtils.h AnalysisUtils.h StandardUtils.h)

target_link_libraries(CPPManagerSystem Qt5::Widgets)