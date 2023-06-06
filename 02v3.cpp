#include<stdio.h>
int max(int x, int y){
	return x > y ? x : y;
}
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", max(max(a,b),c));
	return 0;
}