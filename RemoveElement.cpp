class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      //Create temp counter
        int temp = 0;
      //Loop through vect
        for(int i = 0; i < nums.size(); ++i){
      //if vect [i] is move it over
            if(nums[i] != val){
            nums[temp] = nums[i];
      //increase temp
            temp ++;
            }
        }
    return temp;
    }
};
