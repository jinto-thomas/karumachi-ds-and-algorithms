#include <iostream>
#include <math.h>

using namespace std;

int gcd(int m, int n) {
	if (m % n == 0)
		return n;
	m = m % n;
	return gcd(n, m);
}


int main() {
	cout << gcd(4,2) << endl;
	cout << gcd(2,4) << endl;
	cout << gcd(16,32) << endl;
	return 0;
}
