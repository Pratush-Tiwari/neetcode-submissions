// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int n=s.length();
//         int maxi=0;

//         for(int i=0;i<n;i++){
//             map<char,int> mp;
//             priority_queue<pair<int,char>> maxheap;
//             int count=0;
//             // if(maxi==n-1-i)break;
//             for(int j=i;j<n;j++){
//                 mp[s[j]]++;
//                 maxheap.push({mp[s[j]],s[j]});
//                 auto [mostfreq, c]=maxheap.top();

//                 if(j-i+1-mostfreq>k) break;
                
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
        int maxi=0;
        map<char,int> mp;
        int l=0;
        int r=0;
        while(r<n){
            mp[s[r]]++;
            if(valid(mp,r-l+1,k)){
                maxi=max(r-l+1,maxi);
                r++;
            }
            else{
                mp[s[l]]--;
                mp[s[r]]--;
                l++;
            }
        }
        return maxi;   
    }
};
