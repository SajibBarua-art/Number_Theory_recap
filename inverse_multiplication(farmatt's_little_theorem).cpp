// modulo multiplication inverse calculation in Farmatt's little theorem
// Farmatt's little theorem: a^(p-1) congruent to 1 under modulo p where p is a prime number
// little change: a^(p-2) congruent to a^-1 (mod p)

#include<iostream>
using namespace std; 

int power(int a, int n, int p) {
	if(n == 0) return 1;
	if(n&1) return (a%p * power(a, n-1, p)%p)%p;
	return power((a%p * a%p)%p, n/2, p);
}

int main() {
	int a, p; cin >> a >> p; // p must be a prime number
	// We have to find the modulo multiplaction inverse of a.
	// It is equal to a^(p-2) (mod p)
	cout << "Modulo Multiplication of " << a << " is: " << power(a, p-2, p) << endl;
}
