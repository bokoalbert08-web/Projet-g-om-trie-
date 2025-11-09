
#include "point.h"
#include "vector.h"
#include "utils.h"

int main() {
    point2f p = MakeP2f(2.0f, 3.0f);
    Print("Point:",ToString(p));

    vector2f v = MakeV2f(1.0f, -1.0f);
    point2f p2 = Translate(p, v);
    Print("Translated:", ToString(p2));

    point2f p3 = Translate(p, 3.2 , 4.0);
    Print("Translated:", ToString(p3));

    point2f p4 = Scale(p, 3.0 , 4.0);
    Print("produit scalaire:",ToString(p4));

    point2f p5 =Scale(p , v);
    Print("produit scalaire par vecteur:" , ToString(p5));

    point2f p6 =Rotate(p , 30.0);
    Print("la rotation:" , ToString(p6));

    Print("\operation sur les vecteurs:\n");

    point2f a1 = MakeP2f(2.0f , 3.0f);
    point2f b1 = MakeP2f(5.0f , 2.0f);
    vector2f v1 = MakeV2f(a1 , b1);
    Print("premier vecteur:", ToString(v1));
    vector2f a2 = MakeV2f (2.0f , 1.0f);
    Print("deuxieme vecteur:", ToString(a2));
    vector2f v2 = Add(a2, v1);
    Print("l'addition des vecteurs:", v2);
    vector2f v3 = Sub(a2, v1);
    Print("la soustration des vecteurs:", v3);
    vector2f v4 =Scale(a2, 3.0);
    Print("l'homothetie:", v4);

    float c =Dot(a2, v1);
    Print("produit scalaire:", c);
    float d =Length(a2);
    Print("norme:", d);

    vector2f v5 = Normalize(a2);
    Print("la normalize:",v5);
    vector2f v6 = Lerp(a2, v1, 0.3);
    Print("l'interpolation lineaire:", v6);

    float x = Determinant( a2, v1);
    Print("le determinant est:", x);
    
    return 0;
}