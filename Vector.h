class Vector{

  public : 
    float norm; 
    float Add(Vector v2); 
    float Multiplication(int r) ; 
    Vector(); 
    Vector( float u, float v ); 
    Vector( const Vector & model); 
    ~Vector();
  
  protected: 
    float x; 
    float y ; 
};
