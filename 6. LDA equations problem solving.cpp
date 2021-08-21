// Problem link: https://www.codechef.com/problems/COPR16G
// It is a one type of Linear Diophantine Equations

#include<bits/stdc++.h>
using namespace std;
 
#define fl(st, en, i) for(int i = st; i < en; i++)
#define ll long long
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define pi 3.141592653589793238462
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)   __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)   __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)   __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define Case cout << "Case " << c << ": "
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define el "\n"
const int mod = 1e9+7;

void testCase() {
	ll a, b; cin >> a >> b;
	if(__gcd(a, b) > 1) cout << -1 << el;
	// from Chicken MeNugget theorem
	else cout << a*b-a-b+1 << el;
}

int main() {
	fio;
	int t; cin >> t;
	while(t--) testCase();
}
