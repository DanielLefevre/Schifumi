/*
 * Feuille.h
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#ifndef FEUILLE_H_
#define FEUILLE_H_

#include "../include/Coup.h"
#include <string>

class Feuille : public Coup {
public:
	Feuille(Joueur*);
	virtual std::string getType() const;
	virtual ~Feuille();
private:
    static std::string type;
};
#endif /* FEUILLE_H_ */
