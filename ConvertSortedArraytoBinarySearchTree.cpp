/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* helper(vector<int> nums, int start, int end){
        if(start>end){
            return NULL;
        }
        int mid = start+(end-start)/2;

        TreeNode* left = helper(nums, start, mid - 1);
        TreeNode* right = helper(nums, mid + 1, end);
        TreeNode* newNode = new TreeNode(nums[mid], left, right);
        return newNode;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};
