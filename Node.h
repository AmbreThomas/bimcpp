#include "Vector.h"

class Node{
 public:
  Node();
  Node(Node&);
  Node(Vector&);
  ~Node();
  
  void Assign();
  Vector* GetVector();
  Node* GetNext();
  void SetVector(Vector&);
  
 protected:
  Node* next;
  Vector* ptr;
};
