#include <stdio.h>
#include <math.h>

#include "point.h"

float distanceTo(Point point1, Point point2)
{
    float dx = point2.x - point1.x;
    float dy = point2.y - point2.y;
    return (float)sqrt(dx * dx + dy * dy);
}