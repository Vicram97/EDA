/*#include <iostream>>
using namespace std;


void calcular(long long int & longitud, long long int  & suma, int  & numCuadrados){

	if (longitud <= 1) suma += numCuadrados * 4;

	else{
		suma += numCuadrados * longitud * 4;
		longitud /= 2;
		numCuadrados *= 4;
		calcular(longitud, suma, numCuadrados);
	}
}


bool casodePrueba(){
	long long int longitud, suma = 0;
	int numCuadrados = 1;

	cin >> longitud;
	
	if (!cin) return false;

	else{

		calcular(longitud, suma, numCuadrados);

		cout << suma << endl;

		return true;
	}
}


int main(){

	while (casodePrueba());

	return 0;
}*/