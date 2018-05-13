#include<stdio.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    if(digits == NULL){
    	return NULL;
	}
	int n = digitsSize - 1;
	while(n >= 0){
		if(digits < 9){
			digits[n]++;
			*returnSize = digitsSize;
			return digits;
			
		}
		else{
			digits[n] = 0;
			n--;
		}
	}
	int * newdigit = (int *)malloc((digitsSize + 1)*sizeof(int));
	newdigit[0] = 1;
	for(int i = 1; i < (digitsSzie + 1); i++){
		newdigit[i] = digits[i-1];
}
	*returnSize = digitsSize + 1;
	return newdigit;
}
int main(){

	return 0;
} 
