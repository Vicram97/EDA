#include <iostream>
using namespace std;

typedef int tVector[10000];

//Precondición: 0 <= longitud 
//funcion producto
//PostCondición: resul = prod j ( 0 <= j < n : V[j]) ^ n = longitud
//Invariante: 0 <= n < N ^ prod j ( 0 <= j < n : V[j])


int producto(tVector v, int longitud){
	int resul = 1, i = 0;

	while (i < longitud){
		resul *= v[i];
		++i;
	}

	return resul;
}

int main(){
	int num, longitud, r;
	tVector v;

	cin >> longitud;

	for (int i = 0; i < longitud; ++i){
		cin >> num;
		v[i] = num;
	}

	r = producto(v, longitud);

	cout << r << endl;

	return 0;
}