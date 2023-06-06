#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int reverseNum = 0;
	while(n > 0){
		reverseNum = (reverseNum * 10) + n % 10;
		n /= 10;
	}	
	printf("%d\n", reverseNum);
	return 0;
}