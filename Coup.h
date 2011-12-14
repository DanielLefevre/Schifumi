/*
 * Coup.h
 *
 *  Created on: 7 déc. 2011
 *      Author: Daniel
 */

#ifndef COUP_H_
#define COUP_H_

#include <iostream>

class Coup {
public:
	Coup();
	virtual std::string type();
	virtual ~Coup();
	bool operator==(const Coup&, const Coup&);
	std::ostream& operator<<(std::ostream&, const Coup&);
};

#endif /* COUP_H_ */
