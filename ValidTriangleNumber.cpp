class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        int count = 0;
        for(int i=2;i<n;i++){
            int l = 0;
            int r = i-1;
            while(l<r){
                if(nums[l] + nums[r] > nums[i]){
                    count+=r-l;
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return count;
    }
};
