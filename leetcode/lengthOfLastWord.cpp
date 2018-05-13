#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int lengthOfLastWord(char* s) {
    char *p = s + strlen(s) -1;
    int count = 0;
    if(*p==' ') return count;
    while(*p!=' ') {
    	count++;
    	p--;
	}
    return count;
}
int main(){
    char *s;
	s = (char*)malloc(sizeof(char));
	s =  "hello world";
	
	printf("%d",lengthOfLastWord(s));
	return 0;
} 
