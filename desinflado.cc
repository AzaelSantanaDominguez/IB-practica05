/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file desinflado.cc
  * @author Azael Santana Dominguez alu0101542119@ull.edu.es 
  * @date Nov 1 2022
  * @brief This program reads an Uppercase letter and prints it's corresponding
           lowercase letter.
  */

#include <iostream>

int main() {

  char letra_mayuscula{};
  char letra_minuscula{};
  std::cin >> letra_mayuscula;
  letra_minuscula = letra_mayuscula + 32;
  std::cout << letra_minuscula << std::endl;

return 0;

}

 
