/**                                                                             
  * Universidad de La Laguna                                                    
  * Escuela Superior de Ingeniería y Tecnología                                 
  * Grado en Ingeniería Informática                                             
  * Informática Básica 2022-2023                                                
  *                                                                             
  * @file three_words.cc                                                         
  * @author Azael Santana Dominguez alu0101542119@ull.edu.es                    
  * @date Nov 3 2022
  * @brief Program reads three words a, b and c.
           Prints a line with c, b and a.                                                                       
  */ 

#include <iostream>

int main() {

  std::string a, b, c;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  std::cout << c << " " << b << " " << a << std::endl;  

  return 0;
}
