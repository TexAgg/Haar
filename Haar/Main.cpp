#include <iostream>
#include <vector>
#include "Haar.h"
#include "Deconstructed.h"

using namespace std;

int main(){
	cout << Haar::phi(2.5) << endl;

	Deconstructed h(3);

	h.a.reserve(3);
	h.b.reserve(3);

	h.a.push_back({});
	h.b.push_back({});
	h.a.push_back({ 3 / 2.0, -1 });
	h.b.push_back({ -1, -3 / 2.0 });
	h.b.push_back({ -3 / 2.0, -3 / 2.0, -1 / 2.0, -1 / 2.0 });

	h.subscripts(2);
	
	for (auto k : h.a[2]){
		cout << k << ',';
	}
}