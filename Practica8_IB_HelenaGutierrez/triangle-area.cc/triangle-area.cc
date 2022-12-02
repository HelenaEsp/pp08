/**
 * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file triangle-area.cc
  * @author Helena Gutierrez Espinosa alu0101398662@ull.edu.es
  * @date 
  * @brief que tome como entrada las longitudes a, b y cde los lados de 
  * un triángulo y calcule su área utilizando la Fórmula de Herón. 
  * @bug There are no known bugs
  * @see 
*/
#include <iostream>
#include <cmath>

using namespace std;

float pedirParametros(){
 float parametro;
 cin >> parametro;
 return parametro;
}

float area(float a, float b, float c) {
 float resultado = 0, s = 0;
 s = (a + b + c) / 2;
 resultado = sqrt(s * (s - a) * (s - b) * (s - c));
 return resultado;
}
bool isAValidTriagle(float a, float b, float c) {
 if ((a > (b + c)) || (b > (a + c)) || (c > (a + b))) {
  return false;
 }
 return true;
}


int main()
{
 float x, y, t;
 x = pedirParametros();
 y= pedirParametros();
 t = pedirParametros();
 if (isAValidTriagle()){
  cout << area(x, y, t);
 } 
 return 0;
}
