# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Helena Gutiérrez Espinosa
# @date 24 nov 2022
# @brief A Makefile for chance_case.cc
# 

OBJ = chance_case.o
CXX = g++
CXXFLAGS = -g -Wall -Wextra -Wpedantic

programa: $(OBJ)
        $(CXX) $(CXXFLAGS) chance_case.o -o chance_case

clean:
        rm -rf *.o *.txt 
        rm chance_case