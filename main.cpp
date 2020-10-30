#include <iostream>
#include "coord3d.h"
#include "3dspace.h"
using namespace std;

int main() {
  // Task A. Length and distance in 3D space
  Coord3D pointP = {10, 20, 30};
  cout << length(&pointP) << endl; // would print 37.4166

  cout << "----------" << endl;

  // Task B. Farther from the origin?
  pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  cout << "Address of P: " << &pointP << endl;
  cout << "Address of Q: " << &pointQ << endl << endl;

  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);

  cout << "ans = " << ans << endl; // So which point is farther?

  cout << "----------" << endl;

  // Task C. Velocity and moving objects
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  cout << pos.x << " " << pos.y << " " << pos.z << endl; // prints: 2 -10 100.4

  cout << "----------" << endl;

  // Task E. Creating and deleting objects dynamically
  double x = 10, y = 20, z = 30;
  cout << "Enter position: " << x << " " << y << " " << z << endl;
  Coord3D *ppos = createCoord3D(x,y,z);

  x = 5.5, y = -1.4; z = 7.77;
  cout << "Enter velocity: " << x << " " << y << " " << z << endl;
  Coord3D *pvel = createCoord3D(x,y,z);

  move(ppos, pvel, 10.0);

  cout << "Coordinates after 10 seconds: "
       << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);

  cout << "----------" << endl;
}
