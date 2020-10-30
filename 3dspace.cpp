#include <iostream>
#include <math.h>       /* pow */
#include "coord3d.h"
#include "3dspace.h"
using namespace std;

// Task A. Length and distance in 3D space
double length(Coord3D *p) {
  return sqrt((pow(p->x,2) + pow((*p).y,2) + pow((*p).z,2)));
}

// Task B. Farther from the origin?
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
  if (length(p1) > length(p2)) {
    return p1;
  }
  else {
    return p2;
  }
}

// Task C. Velocity and moving objects
void move(Coord3D *ppos, Coord3D *pvel, double dt) {
  (*ppos).x = (*ppos).x + (*pvel).x * dt;
  (*ppos).y = (*ppos).y + (*pvel).y * dt;
  (*ppos).z = (*ppos).z + (*pvel).z * dt;
}

// Task E. Creating and deleting objects dynamically
// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z) {
  Coord3D* p = new Coord3D();
  (*p).x = x;
  p->y = y;
  p->z = z;

  return p;
}

// free memory
void deleteCoord3D(Coord3D *p) {
  delete[] p;
}
