#include "Jeu.h"

//Constructeur du jeu 
Jeu::Jeu()
{
    terrain_grille= Grille(); // appelle le constructeur de Grille
    tour_du_joueur1= true; // Le joueur 1 commence le jeu
    nom_joueur1=1; //ID de joueur 1 sera à 1
    nom_joueur2=2; // ID du joueur 2 sera à 2
    score1=0;// Score du joueur 1 initialisé à 0
    score2=0; // Score du joueur 2 initialisé à 0

}

//Destructeur du jeu
Jeu::~Jeu()
{
    terrain_grille.~Grille(); //détruit la grille
    cout<<"la classe jeu est détruit"<<endl;
}

// Accesseur : récupère toute la grille de jeu
Grille Jeu::getGrille() const
{
    return terrain_grille;    
}

// Accesseur : récupère le point original de coordonnées (x,y) en vérifiant leur validité
Point& Jeu::getPoint(int x, int y) const
{
    int etat= terrain_grille.getXY(x,y);
    Point p1;
    switch (etat)
    {
    case 0:
        cout<<"il n'y a pas de point sur cette coordonnée"<<endl;
        break;

    case 1:
         p1.setXY(x,y);
         p1.set_utilisable(true);
         p1.set_nom_joueur(1);
        break;

    case 2:
         p1.setXY(x,y);
         p1.set_utilisable(true);
         p1.set_nom_joueur(2);
        break;

    case 3:
         p1.setXY(x,y);
         p1.set_utilisable(false);
         p1.set_nom_joueur(1);
        break;

    default:
         p1.setXY(x,y);
         p1.set_utilisable(true);
         p1.set_nom_joueur(1);
    }
    return p1;
}

// Accesseur : récupère les prisons 
Prison Jeu::getPrison() const
{
    
}

// Accesseur : récupère l'identifiant du joueur 1
int Jeu::getnom_joueur1 ()const
{
    return nom_joueur1;    
}

// Accesseur : récupère l'identifiant du joueur 2
int Jeu::getnom_joueur2()const
{
    return nom_joueur2;    
}

// Accesseur : récupère le score du joueur 1
int Jeu::getscore1()const
{
    return score1;    
}
        
// Accesseur : récupère le score du joueur 2
int Jeu::getscore2()const
{
    return score2;   
}

//Pose un point dans la grille de jeu
void Jeu::poser_un_point(int id_joueur, int x, int y)
{
    
}

//Trace un mur de longueur 1 dans la grille de jeu
void Jeu::poser_un_mur(int id_joueur,int x1, int y1, int x2, int y2)
{
    
}

//Vérifie si une prison a été formée dans la grille par le joueur
void Jeu::verifie_prison_formee(int id_joueur)
{
    
}
        
//Met à jour le score d'un joueur
void Jeu::verifie_score(int id_joueur)
{
    
}
        
//Met à joueur le tour d'un joueur
//renvoie l'id du joueur
int Jeu::verifie_le_tour(bool tour_du_joueur1)
{
    
}
        
//Verifie si la partie et fini
//Renvoie un booléen
bool Jeu::verifie_fin_partie()
{
    
}
