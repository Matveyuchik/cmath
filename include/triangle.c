#include <stdio.h>
#include <math.h>

#include "triangle.h"
#include "point.h"

float getSideA(Triangle triangle) {
    return distanceTo(triangle.points[0], triangle.points[1]);
}

float getSideB(Triangle triangle) {
    return distanceTo(triangle.points[1], triangle.points[2]);
}

float getSideC(Triangle triangle) {
    return distanceTo(triangle.points[0], triangle.points[2]);
}


int isValid(Triangle triangle)
{
    float a = getSideA(triangle);
    float b = getSideB(triangle);
    float c = getSideC(triangle);

    if (!(a + b > c && a + c > b && c + b > a)) {
        return 1;
    } else return 0;
}

float getArea(Triangle triangle)
{
    float a = getSideA(triangle);
    float b = getSideB(triangle);
    float c = getSideC(triangle);

    if (!isValid(triangle)) {
        return -0.0;
    }

    float p = ((a * b) * (a * c) * (b * c)) / 2;
    return sqrtf(p * (p - a) * (p - b) * (p - c));
}