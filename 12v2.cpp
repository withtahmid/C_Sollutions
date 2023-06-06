#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int divisors[10000];
	int num_of_divs = 0;
	for(int i = 1; i < n; ++i){
		if(n % i == 0){
			divisors[num_of_divs] = i;
			++num_of_divs;
		}
	}
	printf("%d\n", num_of_divs);
	for(int i = 0; i < num_of_divs; ++i){
		printf("%d ",divisors[i]);
	}
	return 0;
}