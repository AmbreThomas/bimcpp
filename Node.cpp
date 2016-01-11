#include "Node.h"
#include <cstdlib> 
#include <iostream>
#include <stdio.h>
#include <math.h>

Node::Node(){
  ptr = new Vector();
  next = nullptr;	
}

Node::Node(Node& obj){
  ptr = obj.ptr;
  next = obj.next;
}


Node::Node(Vector& obj){
  ptr = new Vector(obj);
  next = nullptr;
}

Vector* Node::GetVector(){
  return ptr;
}

Node* Node::GetNext(){
  return next;
}

void Node::SetVector(Vector& v){
  delete ptr;
  ptr = new Vector(v);
}


Node::~Node(){
  delete ptr;
}

