/**
 * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file function-example.cc
  * @author Helena Gutierrez Espinosa alu0101398662@ull.edu.es
  * @date 
  * @brief un programa que incluya una función C++ que realice el cálculo de la 
  * siguiente función matemática de tres variables.
  * @bug There are no known bugs
  * @see 
*/

#include <iostream>
#include <cmath>

using namespace std;
//funciones
float pedirParametros(){
 float parametro;
 cin >> parametro;
 return parametro;
}

float funcion(float x, float y, float t) {
 float resultado = 0;
 resultado = sqrt((2 * t) - 4 ) / ((x * x) - (y * y));
 return resultado;
}
//funcion principal
int main() {
 float x, y, t;
 x = pedirParametros();
 y= pedirParametros();
 t = pedirParametros();
 cout << funcion(x, y, t);
 return 0;
}