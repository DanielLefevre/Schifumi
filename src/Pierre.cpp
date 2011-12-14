/*
 * Pierre.cpp
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#include "../include/Pierre.h"

std::string Pierre::type = "Pierre";

Pierre::Pierre(Joueur* lanceur) : Coup(lanceur) {
}

Pierre::~Pierre() {
}

std::string Pierre::getType() const {
    return this->type;
}
