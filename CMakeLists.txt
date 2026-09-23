cmake_minimum_required(VERSION 4.3)
project(atividades C)

set(CMAKE_C_STANDARD 11)

add_executable(atividades
        1.c
        2.c
        3.c
        4.c)

cmake_minimum_required(VERSION 3.20)
project(atividades C) # Garante que o projeto entenda a linguagem C

set(CMAKE_C_STANDARD 99)

# BUSCA AUTOMÁTICA PARA ARQUIVOS .C
file(GLOB arquivos_c *.c)

foreach(arquivo ${arquivos_c})
    get_filename_component(nome_sem_extensao ${arquivo} NAME_WE)
    add_executable(${nome_sem_extensao} ${arquivo})
endforeach()
