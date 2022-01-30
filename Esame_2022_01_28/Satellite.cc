#include "Satellite.h"

#include <iostream>

using namespace std;

//Constructors
Satellite::Satellite(double m,double x,double y,double z,double vx,double vy,double vz) {
  m_=m;
  x_=x;
  y_=y;
  z_=z;
  vx_=vx;
  vy_=vy;
  vz_=vz;
}

//Getters
double Satellite::m() const {return m_;}
double Satellite::x() const {return x_;}
double Satellite::y() const {return y_;}
double Satellite::z() const {return z_;}
double Satellite::vx() const {return vx_;}
double Satellite::vy() const {return vy_;}
double Satellite::vz() const {return vz_;}

//Setters
void Satellite::set_m(double m) {m_=m;}
void Satellite::set_x(double x) {x_=x;}
void Satellite::set_y(double y) {y_=y;}
void Satellite::set_z(double z) {z_=z;}
void Satellite::set_vx(double vx) {vx_=vx;}
void Satellite::set_vy(double vy) {vy_=vy;}
void Satellite::set_vz(double vz) {vz_=vz;}

//Utility
void Satellite::print(){
  cout << "Massa del satellite: " << m_ << "kg" << endl;
  cout << "Posizione del satellite: (" << x_ << "," << y_ << "," << z_ << ")"<< endl;
  cout << "Velocità del satellite: (" << vx_ << "," << vy_ << "," << vz_ << ")"<< endl;
}

/*Operators
Velocity Velocity::operator+(const Velocity& rhs) const {
  double vx=vx_+rhs.vx_;
  double vy=vy_+rhs.vy_;
  return Velocity(vx,vy);
}
const Velocity Velocity::operator=(const Velocity& rhs) {
  vx_ = rhs.vx_;
  vy_ = rhs.vy_;
  return *this;
  }*/