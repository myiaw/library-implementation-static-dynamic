cmake_minimum_required(VERSION 3.25)
project(static C)

set(CMAKE_C_STANDARD 11)

add_library(static libXPO.c main.c)
