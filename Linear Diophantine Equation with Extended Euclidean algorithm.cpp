// Linear Diopohantine Equation with extended Euclidean gcd
// ax + by = c where a, b and c are given,
// we have to find out the value of x and y

#include<iostream>
using namespace std;

int extended_gcd(int a, int b, int &x, int &y) {
	// base case
	if(b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	
	int x1, y1;
	int d = extended_gcd(b, a%b, x1, y1);
	x = y1;
	y = x1 - (a/b)*y1;
	return d;
}

bool find_any_solution(int a, int b, int c, int &x, int &y) {
	int x0, y0;
	int g = extended_gcd(abs(a), abs(b), x0, y0);
	if(c%g != 0)
		return 0;
	
	x = x0*c/g;
	y = y0*c/g;
	if(a<0) x = -x;
	if(b<0) y = -y;
	return 1;
}

int main() {
	int a, b, c; cin >> a >> b >> c;
	
	int x, y;
	if(!find_any_solution(a, b, c, x, y)) 
		cout << "No solution exist in the integer form!";
	else
		cout << "x: " << x << "\ny: " << y << endl;
	return 0;
}
