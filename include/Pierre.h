/*
 * Pierre.h
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#ifndef PIERRE_H_
#define PIERRE_H_

#include "../include/Coup.h"

class Pierre : public Coup {
public:
	Pierre(Joueur*);
	virtual std::string getType() const ;
	virtual ~Pierre();
private:
    static std::string type;
};

#endif /* PIERRE_H_ */
