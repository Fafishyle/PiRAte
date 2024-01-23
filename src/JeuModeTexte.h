//
//  JeuModeTexte.h
//  PIRAT3

#ifndef JeuModeTexte_h
#define JeuModeTexte_h

#include "Jeu.h"
#include "assert.h"
#include <iostream>

using namespace std;

class JeuModeTexte
{
    private:
    Jeu jeu;
    
    public:
    //constructeur du jeu en mode texte
    JeuModeTexte();

    //destructeur du jeu en mode texte
    ~JeuModeTexte();

    //Affiche en boucle dans la console le texte principal
    void affichetxtBoucleJeu();

    //les fonctions necessaires au jeu
    //affiche et saisit les éléments nécessaire au jeu
    void jouer();

    //tous les mises à jour du jeu
    void verification();
    
    //affiche les messages importants pour le joueur
    void affichemessage();

};

#endif /* JeuModeTexte_h */
