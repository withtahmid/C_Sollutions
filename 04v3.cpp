#include<stdio.h>
int factorial(int n){
	int fact = 1;
	for(int i = 1; i <= n; ++i){
		fact *= i;
	}
	return fact;
}
int main(){
	int n;
	scanf("%d", &n);
	if(n < 0){
		printf("Invalid input\n");
		return 0;
	}
	printf("%d\n", factorial(n));
	return 0;
}