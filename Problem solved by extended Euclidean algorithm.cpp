// Solving a problem using Extended Euclidean algorithm
// Problem link: https://www.spoj.com/problems/CEQU/

#include<iostream>
using namespace std;

int gcd(int a, int b) {
	if(b==0) return a;
	return gcd(b, a%b);
}

int main() {
	int t; cin >> t;
	for(int i=1; i<=t; i++) {
		int a, b, c; cin >> a >> b >> c;
		
		// To a integer solution of x and y, 
		// from the equation c must be divisble by gcd(a, b).
		// Equation: x = x0*(c/g) ,and y = y0*(c/g) [g = gcd(a, b)]
		// Note: x0 and y0 never be divisble by g at the same time
		if(c%gcd(a, b) == 0) {
			cout << "Case " << i << ": Yes\n";
		} else {
			cout << "Case " << i << ": No\n";
		}
	}
}
