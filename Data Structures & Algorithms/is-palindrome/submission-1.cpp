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

        int l2=fs.length();

        int i=0;int j=l2-1;

        while(i<j){
            if(fs[i]!=fs[j]) return false;
            i++;
            j--;
        }

        return true;
        
    }
};
