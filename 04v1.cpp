#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n > 0){
		int factorial = 1;
		for(int i = 1; i <= n; ++i){
			factorial *= i;
		}
		printf("%d\n", factorial);
	}
	else{
		printf("Invalid input\n");
	}
	
	return 0;
}