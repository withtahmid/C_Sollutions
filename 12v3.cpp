#include<stdio.h>
#include<algorithm>
int main(){
	int n;
	scanf("%d", &n);
	int divisors[10000];
	int num_of_divs = 1;
	divisors[0] = 1;
	for(int i = 2; i*i <= n; ++i){
		if(n % i == 0){
			divisors[num_of_divs++] = i;
		}
		if(i*i != n){
			divisors[num_of_divs++] = n/i;
		}
	}
	std::sort(divisors, divisors + num_of_divs);
	printf("%d\n", num_of_divs);
	for(int i = 0; i < num_of_divs; ++i){
		printf("%d ",divisors[i]);
	}
	return 0;
}