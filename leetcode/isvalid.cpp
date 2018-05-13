#include<stdio.h>
#include<string.h>
bool isValid(char* s) {
    int i = 0;
    int index = strlen(s);
    for(i = 0; i < index; i++){
    	if(s[i]=='(')
    	{
    		if(s[i+1]==')')
    			continue;
    		else
    			return false;
		}
		if(s[i]=='{')
    	{
    		if(s[i+1]=='}')
    			continue;
    		else
    			return false;
		}
		if(s[i]=='[')
    	{
    		if(s[i+1]==']')
    			continue;
    		else
    			return false;
		}
	}
	return true;
}
int main(){
	char s[10];
	printf("please input :");
	scanf("%s",s);
	char *str;
	str = s;
	printf("%d",isValid(str));
}
