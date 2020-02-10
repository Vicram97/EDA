#include <iostream>
#include <vector>
using namespace std;

/*void posicion(vector<int> v, bool & ok, int tam, int & pos, int & rep){

	if (tam == 1){
		pos = tam - 1;
		++rep;
	}
	
	else{
		int tamano = tam / 2;
		posicion(v, ok, tamano, pos, rep);

		while (!ok && tamano < tam){
			if (v[tamano - 1] < v[tamano] && rep == 1) {
				ok = true;
				pos = tamano - 1;
			}
			else if (v[tamano - 1] == v[tamano]) ++rep;
			else if (v[tamano - 1] < v[tamano] && rep == 2) rep = 1;
			++tamano;
		}
		
	}
}*/

bool posicion (vector <int> v, int ini, int fin, int & pos, int & rep){
	bool encontrado = false;

	if (ini == fin){
		if (rep == 0){
			pos = ini;
			encontrado = true;
		}
		else ++rep;
	}



	else if (ini == fin - 1){
		if (v[ini] != v[fin] && rep == 0){ 
			pos = ini;
			encontrado = true;
		}
		else if (v[ini] == v[fin]) ++rep;
		else rep = 0;
	}



	else{
		int mitad = (ini + fin) / 2;
		encontrado = posicion(v, ini, mitad, pos, rep);

		if (!encontrado) encontrado = posicion(v, mitad + 1, fin, pos, rep);

	}
	return encontrado;
}


void casodeprueba(){
	int numELem, num, pos = -1, rep = 0;
	bool ok = false;
	vector <int> v;

	cin >> numELem;

	for (int i = 0; i < numELem; ++i){
		cin >> num;
		v.push_back(num);
	}

	//posicion(v, ok, v.size(), pos, rep);

	if (numELem > 1) ok = posicion(v, 0, v.size() - 1, pos, rep);

	if (!ok || numELem == 1) pos = v.size() - 1;

	cout << pos << endl;
}

int main(){
	int numCasos;

	cin >> numCasos;

	for (int i = 0; i < numCasos; ++i) casodeprueba();
	return 0;
}