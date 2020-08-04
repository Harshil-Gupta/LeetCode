class Solution {
public:
    bool isPalindrome(string s) {
     
        int start = 0;
        int end = s.length()-1;
        bool flag = true;             
        
        while(start<end){
        
            while(!isalnum(s[start]) && start<end){
                start++;
            }
        
            while(!isalnum(s[end]) && start<end){
                end--;
            }
            
            if (tolower(s[start])!=tolower(s[end])){
                flag = false;
                break;
            }    
            
            start++;
            end--;
        }   
        
        return flag; 
        }    
};
