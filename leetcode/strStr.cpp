#include<stdio.h>
#include<string.h> 

int strStr(char* haystack, char* needle) {
    int i = 0,len = 0;
    len = strlen(haystack) - strlen(needle);
    char *p,*q;
    for(i = 0; i <= len; i++){
    	p = haystack + i;
    	q = needle;
    	while(*p == *q && *q){
    		p++;
    		q++;
		}
		if(*q == '\0'){
			return i;
		}
	}
	return -1;
}
int main(){
	char haystack[10]="hello"; 
	char needle[10]="l";
	printf("%d",strStr(haystack, needle));
	return 0;
}
 
