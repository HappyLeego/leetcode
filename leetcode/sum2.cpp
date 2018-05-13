#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target) {
    int i;
    int j;
    for(i=0;i<numsSize;i++){
    	for(j=i+1;j<numsSize;j++){
    		if(i!=j){
    			if(nums[i]+nums[j] == target){
    			
    				printf("%d,%d",i,j);
    				
				}
			}
		}
	}
}
int main(){
	int nums[5] = {2, 7, 11, 15};
	int target = 9;
	twoSum(nums,4,target);
} 
