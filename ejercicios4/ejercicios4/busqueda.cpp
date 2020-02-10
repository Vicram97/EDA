/*#include <iostream>
using namespace std;


bool divisible(int N, int i){
	return (N % i == 0);
}

void calcular(long long int N, int D, int digitosN){
	int i = 0;
	bool ok;
	if (digitosN < D){
		N *= 10;
		++digitosN;
		while (i < 10){
			ok = divisible(N, D);
			if (ok) cout << N << endl;
			++N;
			++i;
		}
	}
}



bool casodeprueba(){
	long long int N;
	int D, digitosN = 0;

	cin >> N; cin >> D;

	if (!cin || N <= 0) return false;

	else{
		
			long long int num = N;

			while (num > 0){
				num /= 10;
				++digitosN;
			}

			cout << N << endl;

			calcular(N, D, digitosN);


			return true;
		
	}
}

int main(){

	while (casodeprueba());

	return 0;
}*/