class Solution {
public:
    bool detectCapitalUse(string word) {
        
        // 97 - a , 122 - z , 65 - A , 90 - Z
        
        int capletters = 0;
      
        for(int i=0;i<word.length();i++){
            if(int(word[i])>=65 && int(word[i])<=90){
                capletters++;
            }
        }
       
        if(capletters == word.length())
            return true;
    
        if(capletters == 0)
            return true;
        
        if(capletters == 1 && int(word[0])>=65 && int(word[0])<=90)
            return true;
        
        return false;
    }
};
