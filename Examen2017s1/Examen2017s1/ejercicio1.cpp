/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool creciente(vector<int> v){
	bool creciente = true;
	int i = 1;

	while (i < v.size() && creciente){
		if (v[i - 1] > v[i] || v[i] - v[i - 1] > 1) creciente = false;
		else ++i;
	}
	return creciente;
}

bool divertido(vector<int> v, int d){
	bool divertido = true;
	int i = 1, num = v[0], rep = 1;
	
	while (i < v.size() && divertido){
		if (v[i] == num && rep >= d) divertido = false;
		else{
			if (v[i] == num && rep < d) ++rep;
			else{
				if (v[i] != num){
					num = v[i];
					rep = 1;
				}
			}
		}
		++i;
	}
	return divertido;
}


void casodeprueba(){
	int n, d, num;

	cin >> d >> n;

	vector<int> v;

	for (int i = 0; i < n; ++i){
		cin >> num;
		v.push_back(num);
	}

	bool ok1 = creciente(v);

	sort(v.begin(), v.end()); //Hay que ordenarlo para calcular la frecuencia, igual que el ejercicio de la moda

	bool ok2 = divertido(v, d);

	if (ok1 && ok2) cout << "SI" << endl;
	else cout << "NO" << endl;
	
}

int main(){

	unsigned int numCasos;

	cin >> numCasos;

	for (int i = 0; i < numCasos; ++i){
		casodeprueba();
	}

	return 0;
}*/