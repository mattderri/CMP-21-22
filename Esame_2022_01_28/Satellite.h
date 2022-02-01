#ifndef SATELLITE_HH
#define SATELLITE_HH

#include "Velocity.h"
#include "Vector3D.h"

class Satellite{

 public:
  
  //Constructors
  Satellite(){
    m_=0;
    A_=0;
  }
  Satellite(double m,Vector3D r,Velocity v,double A);

  //Destructors
  ~Satellite() {}

  //Getters
  virtual double m() const; 
  virtual Vector3D r() const;
  virtual Velocity v() const;
  virtual double A() const;

  //Setters
  virtual void set_m(double m); 
  virtual void set_r(Vector3D r); 
  virtual void set_v (Velocity v);
  virtual void set_A(double A);
  
  //Utility
  double v2(double vx,double vy,double vz);

  double r2(double x,double y,double z);

  double h(double x,double y,double z);

  void print();
  
 private:
  double m_;
  Vector3D r_;
  Velocity v_;
  double A_;

};
#endif
