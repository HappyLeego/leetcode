//Given a sorted array, remove the duplicates in-place such that each element appear only once and return the new length.
#include<stdio.h>
#include<stdlib.h>
int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int count = 0;
    for(i = 1; i < numsSize; i++){
    	if(nums[i] == nums[i-1]){
    		count++;
		}
		else{
			if(count != 0){
				nums[i - count] = nums[i];
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
	int n = removeDuplicates(nums,numsSize);
	for(int j = 0; j < n; j++){
		printf("%d\t",nums[j]);
	}
	 
} 
