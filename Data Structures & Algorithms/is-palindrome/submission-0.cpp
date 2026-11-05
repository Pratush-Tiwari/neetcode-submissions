class Solution {
public:
    bool isPalindrome(string s) {

        int l=s.length();
        string fs="";
        for(int i=0;i<l;i++){
            if(isalnum(s[i])){
                fs += tolower(s[i]);
            }
        }

        string a=fs;
        reverse(fs.begin(),fs.end());

        return a==fs;
        
    }
};
