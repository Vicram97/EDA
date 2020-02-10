/*#include <iostream>
using namespace std;


void sumaNum(int & numero, int & suma){
	suma += numero % 10;
	
	if ((numero / 10) == 0) cout << numero;

	else{
		int a = numero % 10;
		numero /= 10;
		sumaNum(numero, suma);

		cout << " + " << a;
	}

}



bool casodeprueba(){
	int numero, suma = 0;

	cin >> numero;

	if (numero < 0) return false;

	else{
		
		 sumaNum(numero, suma);

		cout << " = " << suma << endl;

		return true;
	}
}

int main(){

	while (casodeprueba());

	return 0;
}*/