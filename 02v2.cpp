#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max_of_first_two = a > b ? a : b;
	int max = max_of_first_two  > c ?  max_of_first_two : c;
	printf("%d\n", max);
	return 0;
}