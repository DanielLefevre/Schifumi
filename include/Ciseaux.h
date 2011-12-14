/*
 * Ciseaux.h
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#ifndef CISEAUX_H_
#define CISEAUX_H_

#include "../include/Coup.h"

class Ciseaux : public Coup {
public:
	Ciseaux(Joueur*);
	virtual std::string getType() const;
	virtual ~Ciseaux();
    static std::string type;
};

#endif /* CISEAUX_H_ */
