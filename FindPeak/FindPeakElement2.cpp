class Solution {
public:
    
    int findPeak(vector<int> nums, int low, int high){
        int mid = low + (high-low)/2;
        int n = nums.size();
        if((mid == 0 || nums[mid] > nums[mid-1]) && (mid == n-1 || nums[mid] > nums[mid+1])){
            return mid;
        }
        else if(mid>0 && nums[mid]<nums[mid-1]){
            return findPeak(nums,low,mid);
        }
        else{
            return findPeak(nums,mid+1,high);
        }
    }
    
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        return findPeak(nums,low,high);
    }
};
