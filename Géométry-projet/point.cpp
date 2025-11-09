#include "point.h"
#include "vector.h"
#include <sstream>

using namespace std;

// Crée un point à partir de coordonnées (x, y)
point2f MakeP2f(float x, float y) {
    point2f p;
    p.x = x;
    p.y = y;
    return p;
}

// Déplace le point selon un décalage dx, dy
point2f Translate(const point2f& P, float dx, float dy) {
    return MakeP2f(P.x + dx, P.y + dy);
}

// Déplace le point selon un vecteur
point2f Translate(const point2f& P, const vector2f& v) {
    return MakeP2f(P.x + v.x, P.y + v.y);
}

// Met à l’échelle (agrandit/rétrécit) le point selon sx, sy
point2f Scale(const point2f& P, float sx, float sy) {
    return MakeP2f(P.x * sx, P.y * sy);
}

// Met à l’échelle selon un vecteur (sx, sy)
point2f Scale(const point2f& P, const vector2f& s) {
    return MakeP2f(P.x * s.x, P.y * s.y);
}

// Fait tourner le point autour de l’origine d’un angle donné (en degrés)
point2f Rotate(const point2f& P, float angleDegree) {
    float rad = angleDegree * M_PI / 180.0f;
    float xNew = P.x * cos(rad) - P.y * sin(rad);
    float yNew = P.x * sin(rad) + P.y * cos(rad);
    return MakeP2f(xNew, yNew);
}

// Convertit le point en texte (ex : "(2.5, 3.0)")
string ToString(const point2f& p) {
    ostringstream oss;
    oss << "(" << p.x << ", " << p.y << ")";
    return oss.str();
}
