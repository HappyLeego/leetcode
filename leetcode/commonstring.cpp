#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    int index; int tempindex; int i =0; int j = 0;
    
    index = strlen(strs[0]);
    char *a = (char *)malloc(sizeof(char)*100);
    strcpy(a,strs[0]);
    for(i = 1; i < strsSize; i++)
    {
    	tempindex = 0;
    	for(j = 0; j < index; j++){
    		if(a[j] == strs[i][j]){
    			tempindex++;
			}
			else{
				a[j] = '\0';
				break;
			}
		}
		if(tempindex == 0)
			return "";
		if(tempindex < index)
			index = tempindex;
	}
	return a;
}
int main(){
	char s[3][10];
	char *str[3];
	printf("please input:\n");
	scanf("%s%s%s",s[0],s[1],s[2]);
	for(int i = 0; i < 3; i++){
		str[i] = s[i];
	}
//	char *str[3]={"abc","abcde","ab"};
	printf("%s",longestCommonPrefix(str, 3));
	return 0;
} 
