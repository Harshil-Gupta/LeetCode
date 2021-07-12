class Solution {
public:    
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>  mp1;
        unordered_map<char,int>  mp2;
        unordered_map<char,char> mp;
        for(int i=0;i<s.size();i++){
            if(mp1[s[i]] > 0 || mp2[t[i]] > 0){
                if(mp[s[i]] != t[i])
                    return false;
            }
            mp1[s[i]]++;
            mp2[t[i]]++;
            mp[s[i]]=t[i];
        }
        return true;
    }
};
