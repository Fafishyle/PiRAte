//
//  Jeu.h
//  PIRAT3

#ifndef Jeu_h
#define Jeu_h

#include "Grille.h"
#include "assert.h"
#include <iostream>

using namespace std;

class Jeu
{
    private:
        Grille terrain_grille; // Le plateau de jeu
        bool tour_du_joueur1; // Définit au tour de qui de jouer
        int nom_joueur1; //Le nom du joueur 1
        int nom_joueur2; //Le nom du joueur 2
        int score1;// Score du joueur 1
        int score2; // Score du joueur 2

    public:
        //Constructeur du jeu
        Jeu();

        //Destructeur du jeu
        ~Jeu();

        // Accesseur : récupère toute la grille de jeu
        Grille getGrille() const;

        // Accesseur : récupère le point original de coordonnées (x,y) en vérifiant leur validité
        Point& getPoint(int x,int y) const;

        // Accesseur : récupère les prisons
        Prison getPrison() const;

        // Accesseur : récupère l'identifiant du joueur 1
        int getnom_joueur1 ()const;

        // Accesseur : récupère l'identifiant du joueur 2
        int getnom_joueur2()const;

        // Accesseur : récupère le score du joueur 1
        int getscore1()const;
        
        // Accesseur : récupère le score du joueur 2
        int getscore2()const;

        //Pose un point dans la grille de jeu
        void poser_un_point(int id_joueur, int x, int y);

        //Trace un mur de longueur 1 dans la grille de jeu
        void poser_un_mur(int id_joueur,int x1, int y1, int x2, int y2);

        //Vérifie si une prison a été formée dans la grille par le joueur
        void verifie_prison_formee(int id_joueur);
        
        //Met à jour le score d'un joueur
        void verifie_score(int id_joueur);
        
        //Met à joueur le tour d'un joueur
        //renvoie l'id du joueur
        int verifie_le_tour(bool tour_du_joueur1);
        
        //Verifie si la partie et fini
        //Renvoie un booléen
        bool verifie_fin_partie();

};

#endif /* Jeu_h */
