#include "Haar.h"

namespace matt {

Haar::Haar() {
}


Haar::~Haar() {
}

double phi(double x) {
	if (x >= 0 && x < 1)
		return 1;
	else
		return 0;
}

double psi(double x) {
	return phi(2 * x) - phi(2 * x - 1);
}

} // End matt namespace
