#include <iostream>
#include<cmath>

using namespace std;

int main() {
  double t = 0; //Initial condition for t
  double x = 1; //Initial condition for x
  double dt = 0.01; //Increment in t. We could choose even smaller number for higher accuracy.

  // Euler Formula: x2 = x1 + dt * f(x1,t1)
  // For the given question f(x,t) = sin(x*t)

while (t <= 76.5) // Given final value of t
  {
    x += dt * sin(x * t);
    t += dt;
  }
cout << "x(76.5) for x(0) = 1 is " << x << endl <<endl;

  //Some more initial conditions.
  //We will choose x0 = {2 ,99.99 ,235, 589.589, 1001}

  double x0[5] = {2, 99.99, 235, 589.589, 1001};
  int i = 0;

  while (i < 5)
  {
    x = x0[i];
    t = 0;
    dt = 0.01;

    while (t <= 76.5)
      {
        x += dt * sin(x * t);
        t += dt;
      }

    cout << "x(76.5) for x(0) = " << x0[i] << " is "<< x << endl;
    i++;
  }

  return 0;
}
