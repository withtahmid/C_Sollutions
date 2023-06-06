#include<stdio.h>
#define ull unsigned long long 
ull factorial(int n){
	if(n == 0){
		return 1;
	}
	return n * factorial(n - 1);
}
int main(){
	int n;
	scanf("%d", &n);
	if(n < 0){
		printf("Invalid input\n");
		return 0;
	}
	printf("%llu\n", factorial(n));
	return 0;
}