/*#include <iostream>
using namespace std;

typedef int tVector[10000];


int pares(tVector v, int num){
	int cont = 0;
	for (int j = 0; j < num; ++j){
		if (v[j] % 2 == 0) cont++;
	}
	return cont;
}

void casoDePrueba() {
	// TU CÓDIGO AQUÍ
	tVector v;
	int num, n, resul;
	cin >> num;
	for (int i = 0; i < num; ++i){
		cin >> n;
		v[i] = n;
	}

	resul = pares(v, num);
	cout << resul << endl;

} // casoDePrueba

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (i = 0; i < numCasos; ++i) {
		casoDePrueba();
	}

	return 0;
}*/