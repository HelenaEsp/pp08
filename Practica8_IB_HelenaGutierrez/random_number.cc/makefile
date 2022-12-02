# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Helena Gutiérrez Espinosa
# @date 24 nov 2022
# @brief A Makefile for random_number.cc
# 
OBJ = random_number.o
CXX = g++
CXXFLAGS = -g -Wall -Wextra -Wpedantic

programa: $(OBJ)
        $(CXX) $(CXXFLAGS) random_number.o -o random_number

clean:
        rm -rf *.o *.txt 
        rm random_number