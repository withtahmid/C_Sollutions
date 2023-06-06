#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int actual_n = n;
	int reverseNum = 0;
	while(n > 0){
		reverseNum = (reverseNum * 10) + n % 10;
		n /= 10;
	}	
	if(reverseNum == actual_n){
		printf("Palindrome\n");
	}
	else{
		printf("Not a Palindrome\n");
	}
	return 0;
}