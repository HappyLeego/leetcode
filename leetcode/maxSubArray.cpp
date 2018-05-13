#include<stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int max = 0;
    int sum = 0;
    for(int i = 0;i < numsSize;i++){
    	if(sum >= 0){
    		sum += nums[i];
		}
		else{
			sum = nums[i];
		}
		if(sum > max){
			max = sum;
		}
	}
	return max;
}

int main(){
	int n;
	printf("please input n:\n");
	scanf("%d",&n);
	int nums[n];
	printf("please input nums:\n");
	for(int i =0 ; i< n;i++){
		scanf("%d",&nums[i]);
	}
	printf("The largest sum is: %d\n",maxSubArray(nums, n));
	return 0;
} 
