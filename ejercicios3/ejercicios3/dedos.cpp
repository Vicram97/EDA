/*#include <iostream>
#include <vector>
using namespace std;

int max(int i, int j){
	int r = i;
	if (j > i) r = j;
	return r;
}

int seg_max (vector <int> v, int n, int p){
	int i = 0, j = 1, r = 1;

	while (j < n){

		while (v[j] - v[i] >= p) ++i;
		r = max(r, j - i + 1);
		++j;
	}
	return r;
}



bool casoDePrueba() {
	int numNacimientos, numAnos;
	

	cin >> numNacimientos;
	cin >> numAnos;
	//leer caso de prueba
		if (numNacimientos == 0 && numAnos == 0) return false;
		else {
			// CÓDIGO PRINCIPAL AQUÍ
			vector <int> v;
			int num, sol;
			for (int i = 0; i < numNacimientos; ++i){
				cin >> num;
				v.push_back(num);
			}

			sol = seg_max(v, numNacimientos, numAnos);

			cout << sol << endl;

			return true;
		}
} // casoDePrueba


int main() {
	while (casoDePrueba());

	return 0;
}*/