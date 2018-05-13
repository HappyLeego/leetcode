#include<stdio.h> 
#include<string.h>

char* countAndSay(int n) {
    char s[10000];
    char t[10000];
    strcpy(s,"1");
    strcpy(t,"");
    int count = 1;
    char tmp[3];
    for(int i = 2; i <= n;i++){
    	int len = strlen(s);
    	for(int j = 0;j < len;j++){
    		if(s[j] == s[j+1]){
    			count++; 
			}
			else{
				tmp[0] = count + '0';
				tmp[1] = s[j];
				tmp[2] = '\0';
				strcat(t,tmp);
				count = 1;
			}
		}
		strcpy(s,t);
		strcpy(t,"");
	}
	return s;
}
int main(){
	int n;
	printf("please input n:\n");
	scanf("%d",&n);
	printf("%s\n",countAndSay(n));
	return 0;
}
 
