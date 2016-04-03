#include <vector>
#include <math.h>

#ifndef HAAR_H
#define HAAR_H

#pragma once
class Haar
{
public:
	Haar();
	~Haar();

	static double phi(double x);
	static double psi(double x);
};

#endif