class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        vector<int> arr;
        vector<vector<int>> ans;
        
        int size = 0;
        int n = mat[0].size();
        int m = mat.size();
        if(m*n != r*c)
            return mat;
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<n;j++){
                arr.push_back(mat[i][j]);
                size++;
            }
        }        
        int k = 0;
        for(int i=0;i<r;i++){
            vector<int> temp;
            for(int j=0;j<c;j++){
                temp.push_back(arr[k]);
                k++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
