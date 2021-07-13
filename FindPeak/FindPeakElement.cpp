class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        nums.push_back(INT_MIN);
        int ans_idx = 0;
        if(nums[1]<nums[0]){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] < nums[i] && nums[i+1] < nums[i]){
                if(nums[i-1]!=nums[i+1]){
                    ans_idx = i;
                    break;
                }
                ans_idx = i;
            }
        }
        return ans_idx;
    }
};
