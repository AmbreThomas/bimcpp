# include "Vector.h"
#include <cstdio> 
#include <math.h>
#include <cassert>
#include <iostream>


Vector ::Vector() {
  x=0;
  y=0;
  norm=0; 
}

Vector :: Vector(float u, float v){
  x=u; 
  y=v; 
  norm= sqrt( x*x + y*y);
}

Vector::Vector(const Vector & model) {
  x= model.x; 
  y =model.y; 
  norm = sqrt(x*x + y*y); 
}
	
Vector::~Vector(){
 
}

float Vector::Add(Vector v2) {
  float xadd; 
  float yadd; 
  xadd= this->x + v2.x;
  yadd= this->y + v2.y;
  std::cout<<xadd<<","<<yadd<<std::endl;
  return 0;
}

float Vector::Multiplication (int r) {
  std::cout<<r*this->x<<","<<r*this->y<<std::endl;
  return 0;
}


