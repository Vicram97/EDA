/*#include <iostream>
#include <vector>
using namespace std;


int ordena(vector<int> & v){
	int izq = 0, der = v.size() - 1, aux, pos = -1;
	bool izqok = false, derok = false;

	while (izq <= der){

		if (v[izq] >= 0 && !izqok) ++izq;
		else izqok = true;

		if (v[der] < 0 && !derok) --der;
		else derok = true;


		if (izqok && derok){
			aux = v[izq];
			v[izq] = v[der];
			v[der] = aux;
			++izq;
			--der;
			izqok = false;
			derok = false;
		}

		else if (!izqok) pos = izq;
		else if (!derok) pos = der + 1;

	}

	return pos;
}




void casodeprueba(){
	int n, num, sol;
	vector <int> v;

	cin >> n;

	for (int i = 0; i < n; ++i){
		cin >> num;
		v.push_back(num);
	}

	sol = ordena(v);

	for (int i = 0; i < n; ++i){
		cout << v[i] << " ";
	}
	cout << endl;
	cout << sol << endl;
}


int main(){

	int numCasos;

	cin >> numCasos;

	for (int i = 0; i < numCasos; ++i) casodeprueba();
	return 0;
}*/