#include "Deconstructed.h"

void Deconstructed::subscripts(int j){
	j--;
	a[j].resize(2*a[j - 1].size());
	for (int k = 0; k < a[j-1].size(); k++){
		int l = 2 * k;
		a[j][l] = a[j - 1][k] + b[j - 1][k];
		l++;
		a[j][l] = a[j - 1][k] - b[j - 1][k];
	}
}
