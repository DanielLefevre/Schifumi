/*
 * Ciseaux.cpp
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#include "../include/Ciseaux.h"

std::string Ciseaux::type = "Ciseaux";

Ciseaux::Ciseaux(Joueur* lanceur) : Coup(lanceur) {
}

Ciseaux::~Ciseaux() {
}

std::string Ciseaux::getType() const {
    return this->type;
}
