#ifndef CIRCLE_H
#define CIRCLE_H

/*
Circle.

@param radius radius (float).
*/
typedef struct Circle 
{
    float       radius;
} Circle;

/*
@returns diameter of circle.
*/
float getDiameter(Circle circle);

/*
@returns area of circle
*/
float getArea(Circle circle);

/*
@return length of circumference.
*/
float getCircumference(Circle circle);

#endif