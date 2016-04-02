#include <iostream>
#include <vector>
//#include <Rcpp>
#include "Haar.h"

using namespace std;

// https://www.softintegration.com/docs/ch/plot/
int main(){
	cout << Haar::phi(2.5) << endl;

	vector<vector<double>> a;
	vector<vector<double>> b;

	a.reserve(3);
	b.reserve(3);

	a.push_back({ 3 / 2.0, -1 });
	b.push_back({ -1, -3 / 2.0 });
	b.push_back({ -3 / 2.0, -3 / 2.0, -1 / 2.0, -1 / 2.0 });
}