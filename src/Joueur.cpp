#include "../include/Joueur.h"
#include "../include/Ciseaux.h"
#include "../include/Pierre.h"
#include "../include/Feuille.h"

Joueur::Joueur() {
}

Joueur::~Joueur() {
}

Coup* Joueur::obtenirCoup() {
    int random = rand()/(double)RAND_MAX * 3;

    Coup* c;

    if(random == 0) {
      c = new Ciseaux(this);
    } else if (random == 1) {
      c = new Pierre(this);
    } else if (random == 2) {
      c = new Feuille(this);
    }

    return c;
}
