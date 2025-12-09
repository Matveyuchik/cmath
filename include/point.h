#ifndef POINT_H
#define POINT_H

/*
Point.

@param x x-coord (float).
@param y y-coord (float).
*/
typedef struct Point 
{
    float       x;
    float       y;
} Point;

/*
@returns distance from `point1` to `point2`.
 */
float distanceTo(Point point1, Point point2);

#endif