// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int n=s.length();
//         int maxi=0;

//         for(int i=0;i<n;i++){
//             map<char,int> mp;
//             int mf=0;
//             int count=0;
//             if(maxi>=n-i) break;
//             for(int j=i;j<n;j++){
//                 mp[s[j]]++;
//                 mf=max(mf,mp[s[j]]);

//                 if(j-i+1-mf>k) break;
                
//                 count++;
//                 maxi=max(maxi,count);
//             }
//         }
//         return maxi;   
//     }
// };


class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        if(n<=1)return n;
        int maxi=0;
        map<char,int> mp;
        int l=0;
        int r=0;
        mp[s[r]]++;
        int mostfrequentOnlyIncremented=0;
        while(r<n){
            mostfrequentOnlyIncremented=max(mostfrequentOnlyIncremented,mp[s[r]]);
            if(r-l+1-mostfrequentOnlyIncremented<=k){
                maxi=max(r-l+1,maxi);
                r++;
                mp[s[r]]++;
            }
            else{
                mp[s[l]]--;
                l++;
            }
        }
        return maxi;   
    }
};
