#include <iostream>
#include "../include/Joueur.h"
#include "../include/Partie.h"

using namespace std;

int main() {
    Joueur* j1 = new Joueur();
    Joueur* j2 = new Joueur();
    Partie p = Partie(j1, j2);

    for(int i = 0; i < 10; i ++) {
        p.jouerTour();
        p.afficherScore();
    }
    return 0;
}
