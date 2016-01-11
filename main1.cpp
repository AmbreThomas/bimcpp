#include "Node.h"
#include <cstdlib> 
#include <iostream>
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
  Vector v(1, 3);
  Node n(v);
  std::cout<<"adresse du vecteur : "<<n.GetVector()<<std::endl;
  return 0;
}
