#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "coord3d.h"
#include "3dspace.h"
#include <math.h>       /* pow */

// Task A. Length and distance in 3D space
TEST_CASE("testing length") {
  Coord3D p1 = {20, 30, 40};
  Coord3D p2 = {0, 0, 0};
  Coord3D p3 = {10, 10, 10};

  CHECK(length(&p1) == sqrt(2900));
  CHECK(length(&p2) == sqrt(0));
  CHECK(length(&p3) == sqrt(300));
}

// Task B. Farther from the origin?
TEST_CASE("testing fartherFromOrigin") {
  Coord3D p1 = {20, 30, 40};
  Coord3D p2 = {0, 0, 0};
  Coord3D p3 = {10, 10, 10};

  CHECK(fartherFromOrigin(&p1, &p2) == &p1);
  CHECK(fartherFromOrigin(&p2, &p3) == &p3);
  CHECK(fartherFromOrigin(&p1, &p3) == &p1);
}

// Task C. Velocity and moving objects
TEST_CASE("testing move") {
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos,&vel,0);
  CHECK(pos.x == 0);
  CHECK(pos.y == 0);
  CHECK(pos.z == 100);

  move(&pos,&vel,10);
  CHECK(pos.x == 10);
  CHECK(pos.y == -50);
  CHECK(pos.z == 102);
}

// Task E. Creating and deleting objects dynamically
TEST_CASE("testing createCoord3D") {
  Coord3D *test = createCoord3D(1.0, 1.0, 2.0);
  CHECK(test->x == 1.0);
  CHECK(test->y == 1.0);
  CHECK(test->z == 2.0);
  
  test = createCoord3D(0, 0, 0);
  CHECK(test->x == 0);
  CHECK(test->y == 0);
  CHECK(test->z == 0);
}
