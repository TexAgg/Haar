#include <iostream>
#include <vector>
#include<fstream>
#include "Haar.h"

using namespace std;

int main(){
	vector<double> a2 = { 0.5, 2, 2.5, -1.5 };
	vector<double> b2 = { -1.5, -1, 0.5, -0.5 };

	vector<double> a3(2 * a2.size());

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
	}
	outfile << a3[a3.size() - 1];
}