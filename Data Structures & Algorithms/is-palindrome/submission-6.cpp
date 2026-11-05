// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int n=s.length();
//         string c="";

//         for(int i=0;i<n;i++){
//             if(isalnum(s[i])){
//                 c+=tolower(s[i]);
//             }
//         }
//         string d=c;
//         reverse(c.begin(),c.end());

//         return c==d;
        
//     }
// };




class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int l=0;
        int r=n-1;

        while(l<r){
            if(isalnum(s[l])&&isalnum(s[r])){
                if(tolower(s[l])!=tolower(s[r])) return false;
                l++;
                r--;
            }

            else if(isalnum(s[l])) r--;

            else l++;
        }
  

        return true;
    }
};
