/*
 * Ciseaux.h
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#ifndef CISEAUX_H_
#define CISEAUX_H_

#include "Coup.h"

class Ciseaux : private Coup {
public:
	Ciseaux();
	virtual std::string type() const;
	virtual ~Ciseaux();
};

#endif /* CISEAUX_H_ */
