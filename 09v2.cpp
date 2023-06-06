#include<stdio.h>
#include<string.h>
bool isPalindrome(char* str){
	int len = strlen(str);
	for(int i = 0, j = len -1; i < len; ++i, --j){
		if(str[i] != str[j]){
			return false;
		}
	}
	return true;
}
int main(){
	char str[12];
	scanf("%s", str);
	printf("%sPalindrome\n", isPalindrome(str) ? "" : "Not a ");
}