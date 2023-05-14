#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

//Let's define a function G_Force which is a vector.
vector<double> G_Force(double m1, double m2, vector<double> r1, vector<double> r2){

  //Assigning the value for constant G.
  const double G = 6.6743e-11;
  
  //Calculating position vector of object 2 wrt object 1.
  vector<double> r12 = {r2[0] - r1[0], r2[1] - r1[1], r2[2] - r1[2]};

  //Calculating magnitude magF.
  double magF = G * m1 * m2 / pow(pow(r12[0], 2) + pow(r12[1], 2) + pow(r12[2], 2), 1.5);

  //Calculating the components of Gravitational force.

  double Fx = magF*r12[0];
  double Fy = magF*r12[1];
  double Fz = magF*r12[2];

  return {Fx, Fy, Fz};
}

int main(){
  double m1, m2;
  vector<double> r1(3), r2(3);
 
  
  cout << "Enter the mass of object 1 (in kg): ";
  cin >> m1;

  cout << "Enter the mass of object 2 (in kg): ";
  cin >> m2;

  cout << "Enter the x-coordinate of the center of mass of object 1 (in m): ";
  cin >> r1[0];
    
  cout << "Enter the y-coordinate of the center of mass of object 1 (in m): ";
  cin >> r1[1];
    
  cout << "Enter the z-coordinate of the center of mass of object 1 (in m): ";
  cin >> r1[2];
    
  cout << "Enter the x-coordinate of the center of mass of object 2 (in m): ";
  cin >> r2[0];
    
  cout << "Enter the y-coordinate of the center of mass of object 2 (in m): ";
  cin >> r2[1];
    
  cout << "Enter the z-coordinate of the center of mass of object 2 (in m): ";
  cin >> r2[2];

  vector<double> F = G_Force(m1, m2, r1, r2);

  cout << "The gravitational interaction between object 1 and object 2 (Fx, Fy, Fz): ("<<F[0]<<", "<<F[1]<<", "<<F[2]<<")N";

  return 0;
  
}