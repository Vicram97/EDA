#include <iostream>
using namespace std;

long int pos(long int a[], long int n, long int suma2) {
	long int suma = suma2;
	long int sumAnt = 0;
	int posMejor;
	int restaMejor = 0;
	if (suma != 0) {
		restaMejor = abs(suma - sumAnt);
		posMejor = n;
		for (int j = n - 1; -1 < j; j--) {
			sumAnt += a[j];
			suma += -a[j];
			if (restaMejor >= abs(suma - sumAnt)) {
				restaMejor = abs(suma - sumAnt);
				posMejor = j;
			}
		}
		return posMejor;
	}
	else return 0;
}


bool casoDePrueba() {
	long int n;
	long int *a = new long int[1000000];
	long int suma2 = 0;
	cin >> n;
	if (n == 0)
		return false;
	else {
		for (long int i = 0; i < n; i++) {
			cin >> a[i];
			suma2 += a[i];

		}
		cout << pos(a, n, suma2) << endl;
		delete[]a;
		return true;
	}
} // casoDePrueba 




int main() {
	
	while (casoDePrueba());

	return 0;
}