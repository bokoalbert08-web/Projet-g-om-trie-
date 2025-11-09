
#ifndef VECTOR_H
#define VECTOR_H
struct point2f;

#include "point.h"
#include <string>
#include <cmath>

struct vector2f {
    float x;
    float y;
};

vector2f MakeV2f(float x, float y);
vector2f MakeV2f(const point2f& a, const point2f& b);
vector2f Add(const vector2f& a, const vector2f& b);
vector2f Sub(const vector2f& a, const vector2f& b);
vector2f Scale(const vector2f& v, float scalar);
float Dot(const vector2f& a, const vector2f& b);
float Length(const vector2f& v);
vector2f Normalize(const vector2f& v);
vector2f Lerp(const vector2f& a, const vector2f& b, float t);
float Determinant(const vector2f& a, const vector2f& b);

std::string ToString(const vector2f& v);

#endif
