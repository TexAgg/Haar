#pragma once
#include "Haar.h"

class Deconstructed :
	public Haar
{
public:
	Deconstructed(int j):size(j){}

	~Deconstructed(){};

	std::vector<std::vector<double>> a;
	std::vector<std::vector<double>> b;

	void subscripts(int j);

private:
	int size;
};

