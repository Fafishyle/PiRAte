//
//  Point.h
//  PIRAT3

#ifndef Point_h
#define Point_h
#include <iostream>
#include "assert.h"

using namespace std;

class Point {
    
private:
    int x; //coordonnée de point
    int y; //coordonnée de point
    bool utilisable; // état du point (le joueur peut l'utiliser ou non)
    int nom_joueur; //l'ID du joueur
    
public:
    //Constructeur par défaut de la classe Point: initialise x et y à 0
    Point ();
    
    //Constructeur de la classe Point: initialise x et y (après vérification)
    Point (int px, int py);
    
    //Destructeur de la classe Point:
    ~Point ();
    
    //Accesseur : récupère l'absisse x du point 
    int getX () const;
    
    //Accesseur : récupère l'ordonné y du point 
    int getY () const;

    //Mutateur: modifie les coordonnées du point 
    void setXY(int a, int b);

    //Mutateur: modifie l'état utilisable
    void set_utilisable(bool etat);

    //Mutateur: modifie le nom du joueur
    void set_nom_joueur(int id);

};

#endif /* Point_h */
