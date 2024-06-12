cmake_minimum_required(VERSION 3.29.3)

project(Projeto_Diario_Programado)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Projeto_Diario_Programado main.cpp src/mysource.cpp)

target_include_directories(Projeto_Diario_Programado PUBLIC "${PROJECT_SOURCE_DIR}/include")
