cmake_minimum_required(VERSION 3.20)
project(atividades C)

set(CMAKE_C_STANDARD 99)

# Pega todos os .c da pasta do CMakeLists.txt
file(GLOB arquivos_c CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/*.c)

foreach(arquivo ${arquivos_c})
    # aula7.1.c -> aula7.1
    get_filename_component(nome ${arquivo} NAME_WLE)
    # troca ponto por underscore: aula7.1 -> aula7_1
    string(REPLACE "." "_" nome ${nome})

    add_executable(${nome} ${arquivo}
            aula411.c)
endforeach()