class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,int> mp;
        for(int i=0;i<emails.size();i++){
            string name;
            string domain;
            bool flag = false;
            bool containsplus = false;
        
            for(int j=0;j<emails[i].size();j++){                
                if(emails[i][j] == '.' && !flag){
                    continue;
                }
                if(emails[i][j] == '@'){
                    flag = true;
                }
                if(containsplus && !flag){
                    continue;
                }
                if(emails[i][j] == '+' && !flag){
                    containsplus = true;
                    continue;
                }
                if(flag)
                    domain+=emails[i][j];
                else
                    name+=emails[i][j];
            }
            if(mp[name+domain] == 0)
                mp[name+domain]++;
        }
        return mp.size();
    }
};
