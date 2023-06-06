#include<stdio.h>
void printMultable(int n){
	for(int i = 1; i <= 10; ++i){
		printf("%lld\n", (long long)n*i);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	printMultable(n);
	return 0;
}