/*#include <iostream>
#include <vector>
using namespace std;


int calcula(vector <long int> v, int numMov, long int & sumder){
	int num;
	long int sumizq = 0;

	if (sumizq == sumder)  num = 1;
	else  num = 0;

	for (int i = 0; i < numMov; ++i){
			
		sumizq += v[i];
		sumder -= v[i];

		if (sumizq == sumder) ++num;

	}

	return num;
}


bool casodePrueba(){
	int numMov, n;
	long int sumder = 0;

	cin >> numMov;

	if (numMov == 0) return false;
	else{ 
		long int cantidad;
		vector <long int> v;

		for (int i = 0; i < numMov; ++i){
			cin >> cantidad;
			v.push_back(cantidad);
			sumder += cantidad;
		}

		n = calcula(v, numMov, sumder);

		cout << n << endl;
		

		return true;
	}
}


int main(){
	
	while (casodePrueba());

	return 0;
}*/