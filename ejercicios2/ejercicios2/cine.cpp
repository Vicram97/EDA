/*#include <iostream>
#include <vector>
using namespace std;


int posicion(vector<int> v, int numVecinos){
	bool ok = true, impares = false;
	int i = 0, sol = 0;

	while (i < numVecinos && ok){

		if (v[i] % 2 == 0 && !impares) ++sol;

		else{

			if (v[i] % 2 != 0 && !impares) impares = true;

			else{
				if (v[i] % 2 == 0 && impares){
					ok = false;
					sol = -1;
				}
			}
		}
		++i;
	}
	
	return sol;
}


void casoDePrueba() {
// TU CÓDIGO AQUÍ
	vector<int> v;
	int numVecinos, num, n;
	

	cin >> numVecinos;

	for (int i = 0; i < numVecinos; ++i){
		cin >> num;
		v.push_back(num);
	}

	n = posicion(v, numVecinos);

	if (n == -1) cout << "NO" << endl;
	else cout << "SI " << n << endl;

} // casoDePrueba

int main() {

	unsigned int numCasos, i;
	cin >> numCasos;

	for (i = 0; i < numCasos; ++i) {casoDePrueba();}

	return 0;
}*/