/*#include <iostream>
#include <vector>
using namespace std;


long long int parejas(vector<long long int> v,  int numPaises){
	long long int sol = 0;
	long long int acumulado = v[0];

	for (int i = 1; i < numPaises; ++i){
		sol += acumulado * v[i];
		acumulado += v[i];
	}

	return sol;
}

bool casodePrueba(){
	int numPaises;
	long long int num, sol;

	cin >> numPaises;

	if (numPaises == 0) return false;


	else{

		vector<long long int> v;

		for (int i = 0; i < numPaises; ++i){
			cin >> num;
			v.push_back(num);
		}

		sol = parejas(v, numPaises);

		cout << sol << endl;
		
		return true;
	}
}

int main(){

	while (casodePrueba());

	return 0;
}*/