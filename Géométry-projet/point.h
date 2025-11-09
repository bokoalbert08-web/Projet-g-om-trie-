#ifndef POINT_H
#define POINT_H
struct vector2f;

#include <string>
#include"vector.h"

struct point2f {
    float x;
    float y;
};

point2f MakeP2f(float x, float y);
point2f Translate(const point2f& p, float dx, float dy);
point2f Translate(const point2f& p, const vector2f& v);
point2f Scale(const point2f& p, float sx, float sy);
point2f Scale(const point2f& p, const vector2f& s);
point2f Rotate(const point2f& p, float angleDegree);

std::string ToString(const point2f& p);

#endif