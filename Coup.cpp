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

std::string Coup::type() {
    return std::string("Coup");
}

bool Coup::operator== (const Coup& a, const Coup& b) {
    return (a == b);
}

std::ostream& Coup::operator<<(std::ostream& out, const Coup& coup) {
    out << std::endl;
    return out;
}
