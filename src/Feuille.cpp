/*
 * Feuille.cpp
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#include "../include/Feuille.h"

std::string Feuille::type = "Feuille";

Feuille::Feuille(Joueur* lanceur) : Coup(lanceur) {
}

Feuille::~Feuille() {
}

std::string Feuille::getType() const {
    return this->type;
}
