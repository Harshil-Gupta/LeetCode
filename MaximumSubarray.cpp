class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     
        int n=nums.size();
        int temp=0;
        int ans=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(temp<0) {
                temp=0;
            }
            temp+= nums[i];
            ans=max(ans,temp);
        }
        return ans;
    }
};
