/*#include <iostream>
using namespace std;

typedef int tVector[10000];

bool casoDePrueba() {
// TU CÓDIGO AQUÍ
	tVector v;
	bool ok = true;
	int num, dato, j = 0;
	cin >> num;

	if (num == 0) return false;
	else{

		for (int i = 0; i < num; ++i){
			cin >> dato;
			v[i] = dato;
		}

		while (ok && (j < num - 1)){
			if (v[j] >= v[j + 1]) ok = false;
			else j++;
		}


		if (ok) cout << "SI" << endl;
		else cout << "NO" << endl;

		return true;
	}


} // casoDePrueba

int main() {

	while (casoDePrueba());

	return 0;
}*/