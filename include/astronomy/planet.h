#ifndef PLANET_H
#define PLANET_H

/*
Planet.

@param radius the radius of planet.
@param mass mass of planet.
*/
typedef struct Planet 
{
    float       radius;
    float       mass;
} Planet;

/*
@returns gravity power of `planet` according to mass and radius.
*/
float getGravity(Planet planet);

/*
@returns diameter of `planet`
*/
float getDiameter(Planet planet);

#endif