class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string c="";

        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                c+=tolower(s[i]);
            }
        }

        int m=c.length();

        int l=0;
        int r=m-1;
        while(l<r){
            if(c[l]!=c[r]) return false;
            l++;
            r--;
        }
        return true;
        
    }
};
