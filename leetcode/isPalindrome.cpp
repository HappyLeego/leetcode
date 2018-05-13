#include<stdio.h>
bool isPalindrome(int x) {
	if(x < 0){
		return false;
	}
	else{
		int a = x;
		int b = 0;
		while(a){
			b = b * 10 + a % 10;
			a = a / 10;
		}
		return b == x;
	}
}
int main(){
	int x = 1232;
	
	printf("%d\n",isPalindrome(x));
	return 0;
}
