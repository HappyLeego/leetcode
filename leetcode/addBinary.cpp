#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* reverse(char* a){
	int n = strlen(a);
	int i = 0;
	int j = n-1;
	int t;
	while(i < j){
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
	return a;
}
char* addBinary(char* a, char* b) {
    a = reverse(a);
    b = reverse(b);
    int flag = 0;
    int n = strlen(a);
    int m = strlen(b);
    char c[100];
    char* ch;
    
    if(n < m){
    	for(int j = n; j < m;j++){
    		a[j] = '0';
		}
	}
	if(n > m){
		for(int j = m; j < n;j++){
			b[j] = '0';
		}
	}
	if(n > m){
		for(int i = 0; i < n;i++){
		if(a[i]-'0' + b[i]-'0'+ flag == 2){
			c[i] = 0 + '0';
			flag = 1;
		}
		else{
			c[i] = (a[i] - '0') + (b[i] - '0')+ '0';
			flag = 0;
		}
	}
	if(flag == 1){
		c[n] = '1';
	}
	}
	if(n < m){
		for(int i = 0; i < m;i++){
		if(a[i]-'0' + b[i]-'0'+ flag == 2){
			c[i] = 0 + '0';
			flag = 1;
		}
		else{
			c[i] = (a[i] - '0') + (b[i] - '0')+ '0';
			flag = 0;
		}
		
	}
	if(flag == 1){
		c[m] = '1';
	}
	}
	
    ch = reverse(c);
    return ch;
}

int main(){
	char a[10];
	char b[10];
	scanf("%s%s",a,b);
	printf("%s",addBinary(a, b));
	return 0;
}
