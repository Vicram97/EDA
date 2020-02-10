#include <iostream>
#include <vector>
using namespace std;


void distintos(vector <int> v, int ini, int fin, int & cont){
	/*
	if (tam == 1) ++cont;

	else{
		int tamano = tam / 2;
		distintos(v, cont, tamano);

		while (tamano < tam){
			if (v[tamano - 1] != v[tamano]) ++cont;
			++tamano;
		}

	}*/

	if (ini == fin){
		if (ini == 0 ) cont++;
		else{
			if (v[ini] != v[ini - 1]) ++cont;
		}
	}
	else if (ini == fin - 1){
		if (ini == 0 && v[ini] == v[fin]) cont++;
		else if (ini == 0 && v[ini] != v[fin]) cont += 2;
		else{
			if (v[ini] != v[ini - 1] && v[fin] != v[ini]) cont += 2;
			else if (v[ini] != v[ini - 1] && v[fin] == v[ini]) cont++;
			else if (v[ini] == v[ini - 1] && v[fin] != v[ini]) ++cont;
		}
	}

	else{
		int mitad = (ini + fin) / 2;
		distintos(v, ini, mitad, cont);
		distintos(v, mitad + 1, fin, cont);
	}

}


bool casodeprueba(){
	int numElems, n, cont = 0;

	cin >> numElems;

	if (!cin) return false;
	else{
		vector<int> v;

		for (int i = 0; i < numElems; ++i){
			cin >> n;
			v.push_back(n);
		}

		distintos(v, 0, v.size()-1, cont);

		cout << cont << endl;

		return true;
	}
}


int main(){

	while (casodeprueba());

	return 0;
}