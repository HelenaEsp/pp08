/**
 * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file random_numbers.cc
  * @author Helena Gutierrez Espinosa alu0101398662@ull.edu.es
  * @date 
  * @brief un programa que tome como entrada dos números naturales n y m tales
  * que n < m y genere un número aleatorio real r en el intervalo [n, m].
  * @bug There are no known bugs
  * @see 
*/
#include <iostream>
using namespace std;

//funcion pedir cada numero
int pedirNum() {
 int num1;
 cin>>num1;
 return num1;
}
f// funcion que debuelve un numero aleatorio
int random(int num1, int num2) {
 int randomN;
 randomN = rand() % num2 + num1;
 return randomN;
}
//funcion principal
int main() {
 // mensaje inicial
 cout<<"Este programa toma como entrada dos números naturales "<<
 "n y m tales que n < m y genere un número aleatorio real r en el intervalo [n, m].";
 int num1, num2;
 num1= pedirNum();
 num2 = pedirNum();
 if ((num2<num1)|| (num2 <= 0) || (num1 <= 0)) {
  cout<<"Error. Entrada no esperada."<<endl; // mensaje de error en caso de que m sea mayor que n o negativos.
  return 0;
 }
 cout << random(num1, num2);
 return 0;
}