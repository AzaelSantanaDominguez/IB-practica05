/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file boolean_operators.cc
  * @author Azael Santana Dominguez alu0101542119@ull.edu.es
  * @date Nov 1 2022
  * @brief prints the truth table for a set of boolean variables
  */

#include <iostream>

int main() {

  bool p{};
  bool q{};
  
  std::cout << "p" << "   " << "q" << "   " << "!p" << "   " << "!q" << "   " << "AND" << "   " << "OR" << std::endl;
  std::cout << true << "   " << true << "   " << !true << "    " << !true << "    " << (true && true) << "     " << (true || true) << std::endl;    
  std::cout << true << "   " << false << "   " << !true << "    " << !false << "    " << (true && false) << "     " << (true || false) << std::endl;
  std::cout << false << "   " << true << "   " << !false << "    " << !true << "    " << (false && true) << "     " << (false || true) << std::endl; 
  std::cout << false << "   " << false << "   " << !false << "    " << !false << "    " << (false && false) << "     " << (false ||false) << std::endl;
}
