#include "structure.h"
#include <cmath>

point Translation (point A , point O)
{
    point p;
        p.x = 2*O.x - A.x ;
        p.y = 2*O.y - A.y ;
    return p;
}

point Homothetie (point A , point O , float k)
{
    point p;
    p.x = O.x + k * (A.x - O.x);
    p.y = O.y + k * (A.y - O.y);
    return p;
}

point Rotation (point A , point O , float a)
{
    point p;
    p.x = O.x + (A.x - O.x) * cos(a) - (A.y - O.y) * sin(a);
    p.y = O.y + (A.x - O.x) * sin(a) + (A.y - O.y) * cos(a);
    return p;
}

vecteur Creer_vecteur (point A , point B)
{
    vecteur u;
    u.ux = B.x - A.x;
    u.uy = B.y - A.y;
    return u;
}

vecteur Addition (vecteur u , vecteur b)
{
    vecteur w;
    w.ux = u.ux + b.ux;
    w.uy = u.uy + b.uy;
    return w;
}

vecteur Soustraction (vecteur u , vecteur b)
{
    vecteur w;
    w.ux = u.ux - b.ux;
    w.uy = u.uy - b.uy;
    return w;
}

float Produit_Scalaire (vecteur u , vecteur b)
{
  return u.ux * b.ux + u.uy * b.uy;  
}

float Determinant (vecteur u , vecteur b)
{
    return u.ux * b.uy - u.uy * b.ux;
}

float Norme (vecteur u)
{
    return sqrt ((u.ux * u.ux)+(u.uy * u.uy) );
}

float Interpolation_lineaire (point A , point B , float t)
{
    point p;
    p.x = A.x + t * (B.x - A.x);
    p.y = A.y + t * (B.y - A.y);
}
