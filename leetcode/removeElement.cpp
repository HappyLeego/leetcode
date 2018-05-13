#include<stdio.h>
int removeElement(int* nums, int numsSize, int val) {
    int count=0;
    int i;
    for(i = 0;i < numsSize; i++){
    	if(i == numsSize-1){
    		if(nums[i] == val){
    			nums[i] = 0;
    			count++; 
			}
		}
		else{
			if(nums[i] == val){
				nums[i] = nums[i+1];
				count++;
			}
		} 
	}
	return numsSize-count;
}
int main(){
	int numsSize;
	printf("please input numsSize:\n");
	scanf("%d",&numsSize);
	int nums[numsSize];
	printf("please input nums:\n");
	for(int i =0;i < numsSize;i++){
		scanf("%d",&nums[i]);
	}
	int val;
	printf("please input val:\n");
	scanf("%d",&val);
	int n = removeElement(nums,numsSize,val);
	for(int j = 0; j < n; j++){
		printf("%d\t",nums[j]);
	}
	return 0;
}
