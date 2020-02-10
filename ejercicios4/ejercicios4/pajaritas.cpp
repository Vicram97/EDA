#include <iostream>
using namespace std;


/*int numFiguritas(int largo,int ancho){ //PROBLEMA : MUCHO COSTE, DEMASIADAS OPERACIONES
	int cont = 0;

	if (largo == ancho) ++cont; //Si coinciden ambos, es un cuadrado y se hace pajarita + 1

	else if (ancho >= 10 && largo >= 10){ //Tamaño mínimo requerido por enunciado
		if (largo > ancho){
			cont = largo / ancho;
			cont += numFiguritas(largo%ancho, ancho);
		}
		else{
			cont += ancho / largo;
			cont += numFiguritas(largo, ancho%largo);
		}
	}

	return cont;
}*/

int numFiguritas(int a, int b){ // 0.856 ms 
	int cont = 0;

	if (a >= 10 && b >= 10){
		if (a == b) ++cont;
		else{
			cont += a / b;
			int modulo = a % b;

			if (modulo > b) cont += numFiguritas(modulo, b);
			else cont += numFiguritas(b,modulo);
			
		}
	}
	return cont;
}

/*int numFiguritas(int a, int b){ // 1.568 ms
	int cont = 0;

	if (a >= 10 && b >= 10 && a != b){
			cont += a / b;
			int modulo = a % b;

			if (modulo > b) cont += numFiguritas(modulo, b);
			else cont += numFiguritas(b, modulo);
	}
	else if (a == b && a >= 10 && b >= 10) ++cont;
	return cont;
}*/



bool casodeprueba(){
	int ancho, alto;
	cin >> ancho; cin >> alto;

	if (ancho == 0 && alto == 0) return false;

	else{

	 int num = numFiguritas(ancho, alto);

		cout << num << endl;

		return true;
	}
}


int main(){

	while (casodeprueba());

	return 0;
}