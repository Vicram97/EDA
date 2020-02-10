/*#include <iostream>
using namespace std;


void conversor(int & numero){
	int resto;

	if (numero >= 6){
		
		resto = numero % 6;
		numero = numero / 6;
		

		conversor(numero);

		cout << resto;

	}

	else  cout << numero;
}

int main(){
	unsigned int numCasos;
	int numero;

	cin >> numCasos;

	for (int i = 0; i < numCasos; ++i){
		cin >> numero;

		conversor(numero);
		cout << endl;
	}
	
	return 0;
}*/