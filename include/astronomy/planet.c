#include <stdio.h>
#include <math.h>

#include "planet.h"
#include "astronomy_const.h"

float getDiameter(Planet planet)
{
    return 2 * planet.radius;
}

float getGravity(Planet planet)
{
    return ((G * planet.mass) / getDiameter(planet));
}