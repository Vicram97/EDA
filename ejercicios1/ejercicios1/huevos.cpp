/*#include <iostream>
using namespace std;



bool casoDePrueba() {
	int numHuevos, capacidad, tiempo = 10;
	float num;
	int entero;
	cin >> numHuevos >> capacidad;
		if (numHuevos == 0 && capacidad == 0)
			return false;
		else {
			// CÓDIGO PRINCIPAL AQUÍ
			if (numHuevos > capacidad){
				entero = numHuevos / capacidad;
				num = float(numHuevos) / (capacidad);
				if (num - entero){
					tiempo = tiempo * (entero +1);
				}
				else tiempo = tiempo * num;
			}
			cout << tiempo << endl;
			return true;
		}
} // casoDePrueba
int main() {
	while (casoDePrueba());

	return 0;
}*/