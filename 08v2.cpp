#include<stdio.h>
#include<string.h>
int main(){
	char str[12];
	scanf("%s", str);
	int length = strlen(str);
	int sum = 0;
	for(int i = 0, j = length-1; i < length/2; ++i, --j){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	printf("%s\n", str);
}