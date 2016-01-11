# include "Vector.h"
#include <cstdlib> 
#include <iostream>
#include <stdio.h>

int main(int argc, char*argv[]){	
  std::cout<<"Hello World"<<std::endl; 
  Vector v(1,2);
  Vector v2(3,4);
  v.Add(v2);
  v.Multiplication(2);
  return EXIT_SUCCESS;
}
