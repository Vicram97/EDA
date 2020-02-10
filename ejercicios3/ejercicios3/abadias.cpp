/*#include <iostream>
#include <vector>
using namespace std;


int calculaAbadias(vector<int> v, int casos){
	int n = casos - 1, m = 1, p = v[casos - 1];
	while (n != 0){
		if (v[n - 1] > p) {
			++m;
			p = v[n - 1];
		}
		--n;
	}

	return m;


}

bool casoDePrueba() {
	int casos, num, abadias;
	
	cin >> casos;

	if (casos == 0) return false;
	
	else{
		vector<int> v;

		for (int i = 0; i < casos; ++i){
			cin >> num;
			v.push_back(num);
		}

		abadias = calculaAbadias(v, casos);

		cout << abadias << endl;

		return true;
	}
	
} // casoDePrueba


int main() {

	while (casoDePrueba());

	return 0;
}*/