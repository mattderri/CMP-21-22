#include "Satellite.h"
#include "Planet.h"
#include "Atmosphere.h"
#include "Velocity.h"
#include "Vector3D.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <cmath>

#define M 5.972e24 //Massa della Terra [kg]
#define R 6371.    //Raggio della Terra [km]
#define F 80.      //Flusso solare [SFU]
#define A 50.      //Indice geomagnetico
#define m 1200.    //Massa del satellite [kg]
#define r_0 250   //Posizione iniziale [m]
#define G 6.67e-11  //Costante di gravitazione universale [N*m^2*kg^-2]

using namespace std;

int main() {

  Vector3D r(0,r_0,0);
  Velocity v(0,sqrt((G*M)/(r_0)),0);
  Satellite sat(m,r,v,25);
  sat.print();
  Planet Earth(M,R);
  Earth.print();
  Atmosphere atm(1000,F,A);
  atm.print();

  
  return 0;

}
