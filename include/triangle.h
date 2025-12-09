#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"

/*
@param points points of triangle
*/
typedef struct Triangle {
    Point       points[3];
} Triangle;

float getSideA(Triangle triangle);

float getSideB(Triangle triangle);

float getSideC(Triangle triangle);

/*
@returns 0 or 1, depends to nonequality of triangles
*/
int isValid(Triangle triangle);

/*
@returns area of `triangle`
*/
float getArea(Triangle triangle);

#endif