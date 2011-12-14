/*
 * Coup.cpp
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#include "../include/Coup.h"
#include "../include/Ciseaux.h"

Coup::Coup(Joueur* lanceur) : auteurCoup(lanceur) {
    this->auteurCoup = lanceur;
}

Coup::~Coup() {
}

bool Coup::operator== (const Coup& b) {
    return (*this == b);
}

std::ostream& operator<<(std::ostream& out, const Coup& coup) {
    out << coup.getType() << std::endl;
    return out;
}

bool Coup::operator<(const Coup& coup) {
    if(this->getType() == "Ciseaux") {
        if(coup.getType() == "Pierre") {
            return true;
        } else if (coup.getType() == "Feuille") {
            return false;
        }
    } else if(this->getType() == "Feuille") {
        if(coup.getType() == "Ciseaux") {
            return true;
        } else if (coup.getType() == "Pierre") {
            return false;
        }
    } else if(this->getType() == "Pierre") {
        if(coup.getType() == "Feuille") {
            return true;
        } else if (coup.getType() == "Ciseaux") {
            return false;
        }
    }
    return false;
}

Joueur* Coup::getAuteurCoup() {
    return this->auteurCoup;
}
