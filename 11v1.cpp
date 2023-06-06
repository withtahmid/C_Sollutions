#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	bool prime = true;
	for(int i = 2; i < n; ++i){
		if(n % i == 0){
			prime = false;
			break;
		}
	}
	printf("%sPrime", prime && n > 1 ? "" : "Not a");
	return 0;
}