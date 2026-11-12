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
    bool valid(map<char,int> mp, int n, int k){
        int maxi=0;
        for(auto it:mp){
            maxi=max(maxi,it.second);
        }
        return n-maxi<=k;
    }
    int characterReplacement(string s, int k) {
        int n=s.length();
        if(n<=1)return n;
        int maxi=0;
        map<char,int> mp;
        int l=0;
        int r=0;
        mp[s[r]]++;
        while(r<n){
            if(valid(mp,r-l+1,k)){
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
