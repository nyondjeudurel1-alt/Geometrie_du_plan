#include "structure.h"
#include <iostream>
#include <cmath>

int main()
  {
     point A , B , p ;
     vecteur v , w , u , b ;
     float x , y , k , a , ux , uy , t ;
     int c;
      
      std::cout <<"!!!!!!!!!! GEOMETRIE DU PLAN ~ MENU ~ !!!!!!!!!\n";
      std::cout <<"1.TRANSLATION D'UN POINT\n";
      std::cout <<"2.HOMOTHETIE\n";
      std::cout <<"3.ROTATION D'UN POINT\n";
      std::cout <<"4.CREER VECTEUR\n";
      std::cout <<"5.ADDITION\n";
      std::cout <<"6.SOUSTRACTION\n";
      std::cout <<"7.PRODUIT SCALAIRE\n";
      std::cout <<"8.DETERMINANT\n";
      std::cout <<"9.NORME\n";
      std::cout <<"10.LERP\n";
      std::cin>>c;
   
        switch (c)
         {
                case 1 :
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU POINT A TRANSLATER\n";
                    std::cin>>A.x>>A.y;
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DE SON CENTRE\n";
                    std::cin>>B.x>>B.y;
                    p = Translation (A,B);
                    std::cout <<"LE RESULTAT DE LA TRANSLATION SONT LES POINTS DE COORDONNEES ("<<p.x<<","<<p.y<<")\n";
                break;

                case 2 :
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU POINT\n";
                    std::cin>>A.x>>A.y;
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU CENTRE DE L'HOMOTHETIE\n";
                    std::cin>>B.x>>B.y;
                    std::cout << "VEUILLEZ ENTRER LE RAPPORT K DE L'HOMOTHETIE\n";
                    p = Homothetie (A,B,k);
                    std::cout <<"LE POINT RESULTANT EST LE POINT DE COORDONNEES("<<p.x<<","<<p.y<<")\n";
                 break; 
                 
                 case 3 :
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU POINT\n";
                    std::cin>>A.x>>A.y;
                    std::cout <<"VEUILLEZ ENTRER LES POINTS (x,y) DU CENTRE DE ROTATION\n";
                    std::cin>>B.x>>B.y;
                    std::cout <<"VEUILLEZ ENTRER L'ANGLE a \n";
                    std::cin>>a;
                    p = Rotation (A,B,a);
                    std::cout <<"LE POINT RESULTANT EST LE POINT DE COORDONNEES("<<p.x<<","<<p.y<<")\n";
                    break;
                   
                  case 4 :
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU PREMIER POINT\n";
                    std::cin>>A.x>>B.x;
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU DEUXIEME POINT\n";
                    std::cin>>B.x>>B.y;
                    u = Creer_vecteur (A,B);
                    std::cout <<"LE VECTEUR RESULTANT EST LE VECTEUR DE COORDONNEES ("<<u.ux<<","<<u.uy<<")\n";
                    break;
                   
                  case 5 :
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU PREMIER POINT\n";
                    std::cin>>A.x>>A.y;
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU DEUXIEME POINT\n";
                    std::cin>>B.x>>B.y;
                    w = Addition (u,b);
                    std::cout <<"LE RESULTAT DE L'ADDITION DE CES DEUX VECTEURS EST("<<w.ux<<","<<w.uy<<")\n";
                    break;
                   
                  case 6 :
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU PREMIER POINT\n";
                    std::cin>>A.x>>A.y;
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU DEUXIEME POINT\n";
                    std::cin>>B.x>>B.y;
                    w = Soustraction (u,b);
                    std::cout <<"LE RESULTAT DE LA SOUSTRACTION DE CES DEUX VECTEURS EST("<<w.ux<<","<<w.uy<<")\n";
                    break;
                   
                   case 7 :
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU PREMIER VECTEUR\n";
                    std::cin>>u.ux>>u.uy;
                    std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU DEUXIEME VECTEUR\n";
                    std::cin>>b.ux>>b.uy;
                    k = Produit_Scalaire (u,b);
                    std::cout <<"LE RESULTAT DU PRODUIT SCALAIRE EN COORDONNEES EST ("<<u.ux*b.ux<<","<<u.uy*b.uy<<")\n";
                    break;

                   case 8 :
                      std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU PREMIER VECTEUR\n";
                      std::cin>>u.ux>>u.uy;
                      std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU DEUXIEME VECTEUR\n";
                      std::cin>>b.ux>>b.uy;
                      k = Determinant (u,b); 
                      std::cout <<"LE RESULTAT DU DETERMINANT EN COORDONNEES EST ("<<u.ux*b.uy<<","<<u.uy*b.ux<<")\n";
                      break;

                   case 9 :
                      std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x) DU VECTEUR\n";
                      std::cin>>u.ux;
                      std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (y) DU  VECTEUR\n";
                      std::cin>>u.uy;
                      k = Norme (u); 
                      std::cout <<"LE RESULTAT DE LA NORME EN COORDONNEES EST ("<<u.ux*u.ux<<","<<u.uy*u.uy<<")\n";
                      break;
                   
                   case 10 :
                      std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU POINT A\n";
                      std::cin>>A.x>>A.y;
                      std::cout <<"VEUILLEZ ENTRER LES COORDONNEES (x,y) DU POINT B\n";
                      std::cin>>B.x>>B.y;
                      k = Interpolation_lineaire (A,B,t) ;
                      std::cout <<"LE RESULTAT DU LERP EN COORDONNEES EST ("<<p.x<<","<<p.y<<")\n";
                      break;

                default:
                      std::cout <<"CHOIX INVALIDE\n";
                break;
           }
               return 0;

  } 
