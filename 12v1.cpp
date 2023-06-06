#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int number_of_divisors = 0;
	for(int i = 1; i < n; ++i){
		if(n % i == 0){
			++number_of_divisors;
		}
	}
	printf("%d\n", number_of_divisors);
	for(int i = 1; i < n; ++i){
		if(n % i == 0){
			printf("%d ", i);
		}
	}
	return 0;
}