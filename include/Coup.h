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
	virtual std::string type() const = 0;
	virtual ~Coup();
	bool operator==(const Coup&);
	Coup& operator<<(const Coup&);
	bool operator<(const Coup&);
};

std::ostream& operator<<(std::ostream&, const Coup&);

#endif /* COUP_H_ */
