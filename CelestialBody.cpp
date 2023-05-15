#include <iostream>
#include<string>
#include<cmath>
using namespace std;

const double G = 6.6743e-11;
const double pi = 3.14;

class CelestialBody
{
        
    public:
string name; // Body name
double mass;
double radius;
string galaxy; // Name of the galaxy where the body is located
long age; // time passed since the formation of the body
double mag_field; // Magneric Field strength of bodies
double rotation_per; // rotational period of body (time taken to rotate about its axis )

       /*functions*/

double density(double mass, double radius)
{
  double d = mass/(4*pi/3)*pow(radius,3);
  return d;
}

};

class Star : public CelestialBody{
    
    public:
string type; // Type of star eg. Red giant/Blue giant etc.
char spectral_type; // type of spectrum od star eg. O/M/A etc. 
int num_planet; // number of planets rotating the star
double T_eff; // Effective temperature of star
double abs_mag; // absolute magnitude of star

         /*functions*/

double Luminosity(double radius, double T_eff)
{
  const double sigma = 5.67e-8; // Stefan-Boltzmann constant
  double L = 4*pi*pow(radius,2)*sigma*pow(T_eff,4); // L = 4πR²σT⁴
  return L;
}

};

class Planet :public CelestialBody{
    
    public:
string parent_star; // name of the star around which the planet rotates
int num_moon; // number of moons the planet has
double orb_dis; // distance between the parent star and the planet (orbital distance)
double Mstar; // Mass of parent star
double eccentricity; // eccentricity of the orbit of planet

         /*functions*/

double orbital_vel(double Mstar, double orb_dis)  //orbital velocity of planet
{
  double orb_vel = pow(G*Mstar/orb_dis,0.5);  // V = √(G * Mstar / a)
  return orb_vel;
}

double escape_vel(double mass, double radius)   // Escape velocity is the minimum velocity required for an object to escape the gravitational pull of a planet
{
  double esc_vel = pow(2*G*mass/radius,0.5);    // Ve = √(2GM/R)
  return esc_vel;
}













};
    