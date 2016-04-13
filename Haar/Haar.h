#ifndef HAAR_H
#define HAAR_H

#include <vector>
#include <math.h>

namespace matt {

class Haar
{
public:
	Haar();
	~Haar();

	friend double phi(double x);
	friend double psi(double x);
};

} // End matt namespace

#endif