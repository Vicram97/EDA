/*
*ENUNCIADO EXPLICACION PROBLEMA DE LAS REINAS:
	- Tenemos que colocar el mayor número de reinas posibles en un tablero de ajedrez sin que se hagan jaque entre ellas

	- Esquema de Resolucion

		inicio
			si esSolucion(x) entonces
				ok true
			de lo contrario
				ok false
				L = candidatos(x)
				while !ok && !vacia(L) hacer
					x[i + 1] Cabeza [L]; L Resto(L)
					Backtracking(X,ok)
				fin while
			fin
		final
*/
/*
#include <iostream>
using namespace std;


void imprimir(int tablero[8][8]){

	cout << endl;

	for (int i = 0; i < 8; ++i){ //Mostramos el tablero
		for (int j = 0; j < 8; ++j){
			cout << tablero[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

}


bool aceptable(int i, int k, int tablero[8][8]){
	int j = 0;
	bool ok = true;

	//FILAS
	while (j < i && ok){
		if (tablero[j][k] == 1) ok = false;
		else++j;
	}

	j = 0;

	//COLUMNAS
	while (j < k && ok){
		if (tablero[i][j] == 1) ok = false;
		else++j;
	}

	//DIAGONAL IZQUIERDA
	int h = i;

	for (int t = k; t >= 0 && h >= 0; --t){
		if (tablero[h][t] == 1) ok = false;
		--h;
	}

	//DIAGONAL DERECHA
	h = i;
	for (int t = k; t >= 0 && h < 8; --t){
		if (tablero[h][t] == 1) ok = false;
		++h;
	}

	return ok;
}


void resolver(int tablero[8][8], int k){

	for (int i = 0; i < 8; ++i){ //Recorremos las filas del tablero, la k determina la columna

		if (aceptable(i, k, tablero)){ //En esa posicion esta bien colocada la reina????

			tablero[i][k] = 1; //Marcamos reina colocada

			if (k == 7) imprimir(tablero); //Final
			else resolver(tablero, k + 1); //No Final

			tablero[i][k] = 0; //Desmarcar reina
		}
	}

}


int main(){

	int tablero[8][8]; //Array del tablero

	int k = 0;

	for (int i = 0; i < 8; ++i){ //Inicializamos todo a 0
		for (int j = 0; j < 8; ++j){
			tablero[i][j] = 0;
		}
	}

	resolver(tablero, k);

	return 0;
}*/