// Binomial Coefficient of inverse modular
// Problem link: https://codeforces.com/problemset/problem/1288/C
// Simply: To calculate Combination of (n, k)%p
#include<iostream>
using namespace std;

// Under modulo prime number
const int p = 1e9+7;
const int range = 1025;

int F[range];
int power(int a, int n) {
	int res=1;
	
	while(n) {
		if(n&1) res = (res*1ll*a)%p;
		n/=2;
		a=(a*1ll*a)%p;
	}
	
	return res;
}

int C(int n, int k) {
	if(k>n) return 0;
	
	int res = F[n];
	// From Farmatt's little theorem
	res = (res*1ll*power(F[k], p-2))%p;
	res = (res*1ll*power(F[n-k], p-2))%p;
	
	return res;
}

int main() {
	F[0]=F[1]=1;
	for(int i=2; i<range; i++)
		F[i]=(F[i-1]*1ll*i)%p;
	
	int m, n; cin >> n >> m;
	cout << C(2*m+n-1, n-1) << endl;
}


// Youtube tutorial link: https://www.youtube.com/watch?v=Lxpr5OpeNa8&list=PL2q4fbVm1Ik4liHX78IRslXzUr8z5QxsG&index=23
