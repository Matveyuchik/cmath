#include <stdio.h>
#include <math.h>

#include "const.h"
#include "circle.h"


float getDiameter(Circle circle) 
{
    return 2 * circle.radius;
}

float getArea(Circle circle)
{
    return (PI * powf(circle.radius, 2));
}

float getCircumference(Circle circle)
{
    return 2 * (PI * circle.radius);
}