/*
 * Feuille.h
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#ifndef FEUILLE_H_
#define FEUILLE_H_

#include "Coup.h"

class Feuille : private Coup {
public:
	Feuille();
	virtual std::string type() const ;
	virtual ~Feuille();
};

#endif /* FEUILLE_H_ */
