#include "Haar.h"


Haar::Haar(){
}


Haar::~Haar(){
}

double Haar::phi(double x){
	if (x >= 0 && x < 1)
		return 1;
	else
		return 0;
}

double Haar::psi(double x){
	return phi(2 * x) - phi(2 * x - 1);
}
