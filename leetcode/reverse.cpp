#include<stdio.h>
int reverse(int x) {
    int i = 0;
	int a[5] = {0};
	int y = 0;
	while(x != 0){
		a[i] = x % 10;
		x = x / 10;
		y = y * 10 + a[i];
		i++;
	} 
	return y;
}
int main(){
	int x;
	printf("please input x:");
	scanf("%d",&x);
	printf("%d",reverse(x));
	return 0;
} 

