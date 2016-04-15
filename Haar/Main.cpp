#include <iostream>
#include <vector>
#include <math.h>
#include<fstream>
#include <algorithm>

using namespace std;

double phi(double x) {
	if (x >= 0 && x < 1)
		return 1;
	else
		return 0;
}

double psi(double x) {
	return phi(2 * x) - phi(2 * x - 1);
}

/**
	Calculate the discrete haar wavelet transform
*/
vector<double> discrete_haar_transform(vector<double> input) {
	// Assumes that input.size() = 2^n
	vector<double> output(input.size());

	// Bit shift
	for (int length = input.size() >> 1;; length >>= 1) {
		for (int i = 0; i < length; i++) {
			int sum = input[i * 2] + input[i * 2 + 1];
			int difference = input[i * 2] - input[i * 2 + 1];
			output[i] = sum;
			output[length + i] = difference;
		}
		if (length == 1)
			return output;
		copy_n(output.begin(), length << 1, input.begin());
	}
}

int main() {
	vector<double> a2 = { 0.5, 2, 2.5, -1.5 };
	vector<double> b2 = { -1.5, -1, 0.5, -0.5 };

	// a^3 is twice the size of a^2 (and b^2)
	vector<double> a3(2 * a2.size());

	// Calculate the values of a^3 
	for (int k = 0; k < a2.size(); k++){
		int l = 2 * k;
		a3[l] = a2[k] + b2[k];
		l++;
		a3[l] = a2[k] - b2[k];
	}

	ofstream outfile;
	outfile.open("coefficient.csv");
	for (int k = 0; k < a3.size() - 1; k++){
		outfile << a3[k] << ",";
		cout << a3[k] << ",";
	}
	outfile << a3[a3.size() - 1];
	cout << a3[a3.size() - 1] << endl;
}