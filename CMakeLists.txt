cmake_minimum_required(VERSION 3.2)

project(tinygame)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
#qt_standard_project_setup()

add_executable(tinygame main.cpp mainwindow.cpp)

target_link_libraries(tinygame PRIVATE Qt6::Widgets)

set_target_properties(tinygame PROPERTIES WIN32_EXECUTABLE ON)