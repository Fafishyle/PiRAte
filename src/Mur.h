//
//  Mur.h
//  PIRAT3


#ifndef Mur_h
#define Mur_h

#include "Point.h"
#include "assert.h"  //pour les préconditions
#include <stdlib.h>  // pour les valeurs aléatoires
#include <iostream>

using namespace std;

class Mur {
    
    private :
    
        Point a; // Point de départ
        Point  b; // Point d'arrivée
    
    public :
    
        //constructeur de Mur
        Mur  () ;

        // Constructeur de la classe Mur : initialise a et b à 0
        Mur (int a, int b);
      
        ~Mur () ;                     //destructeur
    
    
        Point& getA () const;          // Accesseur : récupère le point de départ original A dans point
        Point& getB () const;          // Accesseur : récupère le point d'arrivée original B dans point
    
    bool estMurValide (Point c,Point d); // renvoie booléen, vérifie si c'est un mur de longueur 1
    
};

#endif /* Mur_h */
