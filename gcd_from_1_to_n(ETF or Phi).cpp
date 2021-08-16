// In this program I try to calculate gcd from 1 to n by using Eulier Totient Function
#include<iostream>
using namespace std;
const int maxn=1e5;
const int mod=1e9+7;

int phi[maxn];
void PHI(int n) {
	for(int i=1; i<=n; i++) phi[i]=i;
	
	for(int i=2; i<=n; i++) {
		if(phi[i]==i) {
			for(int j=i; j<=n; j+=i) {
				phi[j] /= i;
				phi[j] *= (i-1);
			}
		}
	}
}

int main() {
	int n; cin >> n;
	long long ans=0;
	PHI(n);
	for(int i=1; i*i<=n; i++) {
		if(!(n%i)) {
			int d1=i, d2=n/i;
			ans += (d1 * phi[n/d1]);
			if(d1!=d2) ans += (d2 * phi[n/d2]);
		}
	}
	
	cout << ans << endl;
}
