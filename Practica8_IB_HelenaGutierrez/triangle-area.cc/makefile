# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Helena Gutiérrez Espinosa
# @date 24 nov 2022
# @brief A Makefile for triangle-area.cc
# 
OBJ = triangle-area.o
CXX = g++
CXXFLAGS = -g -Wall -Wextra -Wpedantic

programa: $(OBJ)
        $(CXX) $(CXXFLAGS) triangle-area.o -o triangle-area

clean:
        rm -rf *.o *.txt 
        rm triangle-area