#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	const int maxn = 1e5; // 1 * 10^5;
	int arr[maxn];
	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2; i < maxn; ++i){
		arr[i] = arr[i -1] + arr[i - 2];
	}
	for(int i = 0; arr[i] <= n; ++i){
		printf("%d ", arr[i]);
	}
	return 0;
}