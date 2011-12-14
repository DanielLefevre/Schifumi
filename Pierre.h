/*
 * Pierre.h
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#ifndef PIERRE_H_
#define PIERRE_H_

#include "Coup.h"

class Pierre : private Coup {
public:
	Pierre();
	virtual std::string type();
	virtual ~Pierre();
};

#endif /* PIERRE_H_ */
