#ifndef JOUEUR_H
#define JOUEUR_H

#include <cstdlib>
class Coup;

class Joueur {
    public:
        Joueur();
        virtual ~Joueur();
        Coup* obtenirCoup();
};

#endif // JOUEUR_H
