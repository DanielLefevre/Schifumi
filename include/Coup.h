/*
 * Coup.h
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#ifndef COUP_H_
#define COUP_H_

#include <iostream>
#include "../include/Joueur.h"

class Coup {
public:
	Coup(Joueur* lanceur);
	virtual std::string getType() const = 0;
	virtual ~Coup();
	bool operator==(const Coup&);
	bool operator<(const Coup&);
	Joueur* getAuteurCoup();
private:
    Joueur* auteurCoup;
};

std::ostream& operator<<(std::ostream&, const Coup&);

#endif /* COUP_H_ */
