/**
 * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file chance_case.cc
  * @author Helena Gutierrez Espinosa alu0101398662@ull.edu.es
  * @date 
  * @brief un programa que tome como entrada una cadena de caracteres sin espacios e 
  * imprima como salida la misma cadena convirtiendo los caracteres que sean letras 
  * mayúsculas por minúsculas y viceversa. 
  * @bug There are no known bugs
  * @see 
*/

#include<iostream>
using namespace std;

//funcion cambia las mayusculas en minuscula y viceversa

int main(int argc, char *argv[]) {
 char letra;
 for (int i {1};i <= argc ; i++){
    letra= argv[i];
    if((letra >= 'a') && (letra <= 'z')){
     //es minuscula
     
        letra= toupper(letra);//toupper()es una función en C ++ convierte un carácter dado a mayúsculas.
        cout<<letra<<endl;
    }
    else if(letra >= 'A' && letra <= 'Z'){
     //es mayuscula
        letra= tolower(letra);//tolower()es una función en C ++ convierte un carácter dado a minúsculas.
        cout<<letra<<endl;
    }
  /*
  if((argv[i] >= 'a') && (argv[i] <= 'z')){
  //es minuscula
   cout<< toupper(argv[i]);//toupper()es una función en C ++ convierte un carácter dado a mayúsculas.
  }
  else if(argv[i] >= 'A' && argv[i] <= 'Z'){
  //es mayuscula
   cout<<tolower(argv[i]);//tolower()es una función en C ++ convierte un carácter dado a minúsculas.
  }*/
 }

return 0;
}
