# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Helena Gutiérrez Espinosa
# @date 24 nov 2022
# @brief A Makefile for function-example.cc
# 
OBJ = function-example.o
CXX = g++
CXXFLAGS = -g -Wall -Wextra -Wpedantic

programa: $(OBJ)
        $(CXX) $(CXXFLAGS) function-example.o -o function-example

clean:
        rm -rf *.o *.txt 
        rm function-example