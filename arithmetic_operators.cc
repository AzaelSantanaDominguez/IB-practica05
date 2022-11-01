/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file arithmetic_operators.cc
  * @author Azael Santana Dominguez alu0101542119@ull.edu.es
  * @date Nov 1 2022
  * @brief declares and initializes arithmetic variables for defined variables a and b.
  *        Prints the result of the different arithmetic operations.
  */

#include <iostream>

int main() {

  int a{21};
  int b{3};
  int c{};

  c = a + b;
  std::cout<<  a << " " << "+" << " " << b << " = " << c << std::endl;
  
  c = a - b;                                                                    
  std::cout<<  a << " " << "-" << " " << b << " = " << c << std::endl;

  c = a * b;                                                                    
  std::cout<<  a << " " << "*" << " " << b << " = " << c << std::endl;

  c = a / b;                                                                    
  std::cout<<  a << " " << "/" << " " << b << " = " << c << std::endl;

  c = a % b;                                                                    
  std::cout<<  a << " " << "%" << " " << b << " = " << c << std::endl;

  c = a++;                                                                    
  std::cout<<  a << "+""+" << " = " << c << std::endl;

  c = a--;                                                                      
  std::cout<<  a << "-""-" << " = " << c << std::endl;

 return 0;
}
