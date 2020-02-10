/*#include <iostream>
#include <vector>
#include <algorithm> //RTE posicion fuera del vector
using namespace std;



int moda(vector <int> v, int n){
	int i = 1, m = v[0], fm = 1, fa = 1;

	while (i<n){
		if (v[i] == v[i - 1]) ++fa;
		else fa = 1;
		
		if (fm < fa){ fm = fa; m = v[i]; }

		++i;
	}

	return m;
}

bool casoDePrueba() {
	vector <int> v;
	int numValores; 
	int mod, num;

	//leer caso de prueba

	cin >> numValores;
	
		if (numValores == 0) return false;
		
		else {
			// CÓDIGO PRINCIPAL AQUÍ

			for (int i = 0; i < numValores; ++i){
				cin >> num;
				v.push_back(num);
			}

			sort(v.begin(), v.end());

			mod = moda(v, numValores);

			cout << mod  << endl;

			return true;
		}

} // casoDePrueba

int main() {

	while (casoDePrueba());

	return 0;
}*/