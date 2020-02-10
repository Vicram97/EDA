/*#include <iostream>
using namespace std;


int pow(int x, int n, int k) {
	if (n == 0) return 1;

	if (n % 2 == 0) {
		int x1 = pow(x, n / 2, k);
		return (x1 * x1) % k;
	}
	else {
		int x1 = pow(x, (n - 1) / 2, k);
		return (((x1 * x1) % k) * (x % k)) % k;
	}
}

bool casodeprueba(){
	int x, n;
	cin >> x >> n;

	if (x == 0 && n == 0) return false;

	else{
		cout << pow(x, n, 31543) << endl;
		return true;
	}
}

int main() {

	while (casodeprueba());
	return 0;
}*/

