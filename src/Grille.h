//
//  Grille.h
//  PIRAT3

#ifndef Grille_h
#define Grille_h

#include "Point.h"
#include "Mur.h"
#include "Prison.h"
#include "assert.h"
#include <iostream>

using namespace std;

class Grille {

private:
    int dimx;   //dimension de x de la grille
    int dimy;   //dimension de y de la grille
    int **tabGrille; //tableau 2D d'entier représentant l'état de la case (0 = libre ; 1 = joueur 1 ; 2 = joueur 2; 3 = inutilisable)
    
public:
    //Constructeur par défaut de la classe: initialise dimx et dimy à 0
    Grille ();
    
    //Constructeur de la classe: initialise dimx et dimy (après vérification)
    Grille (int dimensionX, int dimensionY);
    
    //Destructeur de la classe: déallocation de la mémoire du tableau
    ~Grille ();
    
    bool estPointUtilisable (const int x, const int y);
     
    //Accesseur : récupère l'état de la case dans la grille
    int getXY (int x, int y) const;
    
    //Accesseur : récupère la dimension x de la grille
    int getDimX () const;
    
    //Accesseur : récupère la dimension y de la grille
    int getDimY () const;
    
};

#endif /* Grille_h */
