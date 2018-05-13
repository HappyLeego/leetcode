#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    if(target < nums[0]){
    	return 0;
	}
	if(nums[numsSize-1] < target){
		return numsSize;
	}
	for(int i = 0; i < numsSize;i++){
		if(nums[i] == target){
			return i;
		}
		if(nums[i]<target&&nums[i+1]>target){
			return i+1;
		}
	}
	 
}

int main(){
	int n;
	int nums[n];
	
	printf("input n:\n");
	scanf("%d",&n);
	printf("input nums:\n");
	for(int i = 0;i < n;i++){
		scanf("%d",&nums[i]);
	}
	int target;
	printf("please input target:\n");
	scanf("%d",&target);
	printf("%d",searchInsert(nums, n, target));
	return 0;
}
