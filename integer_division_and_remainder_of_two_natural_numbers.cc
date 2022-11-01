/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_remainder_of_two_natural_numbers.cc
  * @author Azael Santana Dominguez alu0101542119@ull.edu.ez
  * @date Oct 23 2022
  * @brief Program that reads two natural numbers a and b, with b > 0, and prints the integer division d and the remainder r of a divided by b.
           Where d i r must be the only integer numbers such that 0 ≤ r < b and d · b + r = a.
  */

#include <iostream>
#include <cmath>

int main()
{

  int a, b, r, d;
 
  std::cin >> a;
  std::cin >> b;
 
  d= a/b;
  r= a%b;

  std::cout << d << " " << r << std::endl;
  
  return 0;

}
