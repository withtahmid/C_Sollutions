#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	printf("0 ");
	int left = 0, right = 1, current = 1;
	while(current <= n){
		printf("%d ", current);
		current = left + right;
		left = right;
		right = current;
	}
	return 0;
}