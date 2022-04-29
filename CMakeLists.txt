############################################################
# HEADER
############################################################

cmake_minimum_required(VERSION 3.16)

project (graphical_makefile VERSION 1)

############################################################
# LIBRARY
############################################################

file(GLOB LIB_SRC "lib/src/*.c")
add_library(mylib ${LIB_SRC})

target_include_directories(mylib PUBLIC ${PROJECT_SOURCE_DIR}/lib/include)

############################################################
# EXECUTABLE
############################################################

file(GLOB SOURCES "main.c" "src/*.c")
add_executable(graphical_makefile ${SOURCES})

target_include_directories(graphical_makefile PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(graphical_makefile PUBLIC mylib ncurses)
