const ll maxn = 1e7 + 1, mod = 998244353;
 
ll spf[maxn];
void smallestprimefactor() {
// it stores smallest prime factor of all number less than maxn
    for (ll i = 1; i < maxn; i++) spf[i] = i;
    for (ll i = 2; i < maxn; i += 2) spf[i] = 2;
    for (int i = 3; i * i < maxn; i += 2) {
        if (spf[i] == i) {
            for (int j = i * i; j < maxn; j += i * 2) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}
