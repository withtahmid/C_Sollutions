#include<stdio.h>
int main(){
	char str[12];
	scanf("%s", str);
	int sum = 0;
	for(int i = 0; str[i] != '\0'/* or i < strlen(str);*/; ++i){ //  
		sum += str[i] - '0';
	}
	printf("%d\n", sum);
}