#include<stdio.h>
bool isPrime(int n){
	if(n <= 1){
		return false;
	}
	for(int i = 2; i*i <= n; ++i){
		if( n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%sPrime", isPrime(n) ? "" : "Not a");
	return 0;
}