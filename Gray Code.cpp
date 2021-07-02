class Solution {
public:
    
    vector<string> graycode(int n){
        if(n==1){
            return {"0","1"};
        }
        vector<string> tempresult = graycode(n-1);
        vector<string> result;
        
        for(int i=0;i<tempresult.size();i++){
            string str = tempresult[i];
            result.push_back("0" + str);
        }
        
        for(int i=tempresult.size()-1;i>=0;i--){
            string str = tempresult[i];
            result.push_back("1" + str);
        }
        return result;
    }
    
    int binarytonum(string str){
        return stoi(str,0,2);
    }
    
    vector<int> grayCode(int n) {
        vector<int> v;
        vector<string> str = graycode(n);
        for(int i=0;i<str.size();i++){
            v.push_back(binarytonum(str[i]));
        }
        return v;
    }
};
