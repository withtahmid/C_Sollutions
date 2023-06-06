#include<stdio.h>
int factorial(int n){
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
	printf("%d\n", factorial(n));
	return 0;
}