/*#include <iostream>
using namespace std;


bool funciona(int ini,int fin,int n){
	int k;
	cin >> k;

	while (k--){

		int p;
		cin >> p;
		if (p < ini || p > fin) continue;
		if (p <= n) ini = p;
		else if (n < p) fin = p - 1;

	}

	return ini == fin;
}

bool casodeprueba(){
	int ini, fin, n;

	cin >> ini >> fin >> n;

	if (ini == 0 && fin == 0 && n == 0) return false;

	else{
		bool ok = funciona(ini, fin, n);

		if (ok) cout << "LO SABE" << endl;
		else cout << "NO LO SABE" << endl;
		return true;
	}
}

int main() {

	while (casodeprueba());
	return 0;
}*/