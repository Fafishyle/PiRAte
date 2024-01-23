//
//  Prison.h
//  PIRAT3

#ifndef Prison_h
#define Prison_h


#include "Mur.h"
#include "Point.h"
#include "assert.h"  //pour les préconditions
#include <iostream>


using namespace std;

class Prison {
    
    private :
    
        Mur *prison ;                        // tableau dynamique 1D de lien sur Mur
        Point *prisonnier ;                    // tableau dynamique 1D de lien sur Point
        int nom_joueur ;                     // nom des joueur en entier
    
    public :

    //constructeur de la classe Prison
    Prison () ;

    // Constructeur de la classe: initialise nom_joueur à 0
    Prison  (int nom_joueur);
    
    //destructeur
    ~Prison () ;

    // Accesseur : récupère les points originales prisonniers de la prison
    Point& getPoint_Prisonnier () const;
    
    // Accesseur : récupère un des Murs de la prison
    Mur& getMurde_Prison () const;
    
};

#endif /* Prison_h */
