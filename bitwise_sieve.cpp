#include<stdio.h>
#include<math.h>
const int maxn=100000000;
int primes[1562502]; // maxn>>6 = 1562500

int is_prime(int num) {
	return !(primes[num>>6] & (1<<((num>>1) & 31)));
}

void make_composite(int num) {
	primes[num>>6] |= (1<<((num>>1) & 31));
}

void bitwise_sieve(int n) {
	int sqrt_n=sqrt((double)(n));
	for(int i=3; i<=sqrt_n; i+=2) {
		if(is_prime(i)) {
			for(int j=i*i, k=i<<1; j<=n; j+=k)
				make_composite(j);
		}
	}
	
	if(n>=2) printf("%d ", 2);
	for(int i=3; i<=n; i+=2) {
		if(is_prime(i))
			printf("%d ", i);
	}
	printf("\n");
}

int main() {
	int n; scanf("%d", &n);
	
	bitwise_sieve(n);
}
