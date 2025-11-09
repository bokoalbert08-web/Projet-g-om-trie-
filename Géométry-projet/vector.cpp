#include "vector.h"
#include "point.h"
#include <sstream>

using namespace std;

// Crée un vecteur à partir de x, y
vector2f MakeV2f(float x, float y) {
    vector2f v;
    v.x = x;
    v.y = y;
    return v;
}

// Crée un vecteur entre deux points : a -> b
vector2f MakeV2f(const point2f& a, const point2f& b) {
    return MakeV2f(b.x - a.x, b.y - a.y);
}

// Addition de deux vecteurs
vector2f Add(const vector2f& a, const vector2f& b) {
    return MakeV2f(a.x + b.x, a.y + b.y);
}

// Soustraction de deux vecteurs
vector2f Sub(const vector2f& a, const vector2f& b) {
    return MakeV2f(a.x - b.x, a.y - b.y);
}

// Multiplication par un scalaire
vector2f Scale(const vector2f& v, float scalar) {
    return MakeV2f(v.x * scalar, v.y * scalar);
}

// Produit scalaire (dot product)
float Dot(const vector2f& a, const vector2f& b) {
    return a.x * b.x + a.y * b.y;
}

// Longueur du vecteur
float Length(const vector2f& v) {
    return sqrt(v.x * v.x + v.y * v.y);
}

// Normalisation du vecteur (longueur = 1)
vector2f Normalize(const vector2f& v) {
    float len = Length(v);
    if (len == 0) return MakeV2f(0, 0);
    return Scale(v, 1.0f / len);
}

// Produit scalaire directionnel entre deux vecteurs (projection)
float DotNormalized(const vector2f& a, const vector2f& b) {
    vector2f na = Normalize(a);
    vector2f nb = Normalize(b);
    return Dot(na, nb);
}

// Déterminant (utile pour tester l’orientation)
float Determinant(const vector2f& a, const vector2f& b) {
    return (a.x * b.y) - (a.y * b.x);
}

// Convertit un vecteur en texte (ex : "(2.0, -1.0)")
string ToString(const vector2f& v) {
    ostringstream oss;
    oss << "(" << v.x << ", " << v.y << ")";
    return oss.str();
}
