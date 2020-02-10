#include <iostream>
using namespace std;

int factorial(int num){
	int sol = 0;

	switch (num){
	case 0: sol = 1; break;
	case 1: sol = 1; break;
	case 2: sol = 2; break;
	case 3: sol = 6; break;
	case 4: sol = 4; break;
	default: sol = 0; break;
	}
	return sol;
}

void casoDePrueba() {
	int num, resul;
	cin >> num;
	
	resul = factorial(num);
	cout << resul << endl;
	
} // casoDePrueba


int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (i = 0; i < numCasos; ++i) {
		casoDePrueba();
	}

	return 0;
}