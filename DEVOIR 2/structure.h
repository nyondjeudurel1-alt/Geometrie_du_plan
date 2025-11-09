#ifndef STRUCTURE_H
#define STRUCTURE_H

struct point 
 { 
    float x;
    float y;
 };
 
struct vecteur 
{
    float ux;
    float uy;
};

point Translation (point A , point O);

point Homothetie (point A , point O , float k);

point Rotation (point A , point O , float a);

vecteur Creer_vecteur (point A , point B);

vecteur Addition (vecteur u , vecteur b);

vecteur Soustraction (vecteur u , vecteur b);

float Produit_Scalaire (vecteur u , vecteur b);

float Determinant (vecteur u , vecteur b);

float Norme (vecteur u);

float Interpolation_lineaire (point A , point B , float t);

#endif