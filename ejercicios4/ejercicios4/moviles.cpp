/*#include <iostream>
using namespace std;


bool equilibrio(int pi, int di, int pd, int dd, int & w){
	bool izq = true, der = true;

	if (pi == 0){
		int pii, dii, pdi, ddi;
		cin >> pii >> dii >> pdi >> ddi;
		izq = equilibrio(pii, dii, pdi, ddi, pi);
	}

	if (pd == 0){
		int pid, did, pdd, ddd;
		cin >> pid >> did >> pdd >> ddd;
		der = equilibrio(pid, did, pdd, ddd, pd);
	}

	w = pi + pd;
	return der && izq && (pi*di == pd*dd);
}

bool casodeprueba(){
	int pi, di, pd, dd, w;
	bool equilibrado;

	cin >> pi >> di >> pd >> dd;

	if (pi == 0 && di == 0 && pd == 0 && dd == 0) return false;

	else{

		equilibrado = equilibrio(pi, di, pd, dd, w);

		if (equilibrado) cout << "SI" << endl;
		else cout << "NO" << endl;

		return true;
	}
}

int main(){

	while (casodeprueba());
	return 0;
}*/