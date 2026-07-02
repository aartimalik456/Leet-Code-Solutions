class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0,n=nums.size();
        int end=n-1;
        if(n==1){
            return nums[0];
        }
        while(start<=end){
            int mid=((start+end)/2);
            if(mid==0 && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            if(mid==n-1 && nums[mid] != nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            if(mid % 2 == 0){
                if(nums[mid] == nums[mid-1]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else{
                if(nums[mid] == nums[mid-1]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};