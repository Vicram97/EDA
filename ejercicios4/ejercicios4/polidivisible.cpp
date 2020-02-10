/*#include <iostream>
using namespace std;

bool polidivisible(long long int & numero , int & contador){
	
		if (numero % contador == 0){
			--contador;
			if (contador == 0) return true;
			else{
				numero /= 10;
				polidivisible(numero, contador);
			}
		}
		else return false;
}


bool casodeprueba(){
	long long int numero, num;
	int contador = 1;
	bool  fin;

	cin >> numero; //queremos saber si este numero es polidivisible o no

	num = numero;

	if (!cin) return false;

	else{

		//Contador del número de cifras del numero
		while (num / 10 > 0)
		{
			num = num / 10;
			++contador;
		}

		fin = polidivisible(numero,contador); //FIN = TRUE SI ES POLIDIVISIBLE, FALSE SI NO

		if (fin) cout << "POLIDIVISIBLE" << endl;
		else cout << "NO POLIDIVISIBLE" << endl;

		return true;
	}
}

int main(){

	while (casodeprueba());

	return 0;
}*/