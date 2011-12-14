/*
 * Coup.cpp
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#include "Coup.h"
#include "Ciseaux.h"

Coup::Coup() {
}

Coup::~Coup() {
	// TODO Auto-generated destructor stub
}

bool Coup::operator== (const Coup& b) {
    return (*this == b);
}

Coup& Coup::operator<<(const Coup& coup) {
    *this = coup;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Coup& coup) {
    out << coup.type() << std::endl;
    return out;
}

bool Coup::operator<(const Coup& coup) {
    if(this->type() == "Ciseaux" ) {
        if(coup.type() == "Pierre") {
            return true;
        } else if (coup.type() == "Feuille") {
            return false;
        }
    } else if(this->type() == "Feuille") {
        if(coup.type() == "Ciseaux") {
            return true;
        } else if (coup.type() == "Pierre") {
            return false;
        }
    } else if(this->type() == "Pierre") {
        if(coup.type() == "Feuille") {
            return true;
        } else if (coup.type() == "Ciseaux") {
            return false;
        }
    }
    return false;
}
