// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n=s.length();
//         int maxi=0;

//         for(int i=0;i<n;i++){
//             int count=0;
//             set<char> st;
//             for(int j=i;j<n;j++){
//                 if(st.count(s[j])){
//                     break;
//                 }
//                 else{
//                     count++;
//                     st.insert(s[j]);
//                     maxi=max(count,maxi);
//                 }
//             }
//         }
//         return maxi;
//     }
// };


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int n=s.length();
        int count=0;
        int maxi=0;
        int lasti=-1;

        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end() && mp[s[i]]>lasti){
                lasti=mp[s[i]];
                count=i-mp[s[i]];
                mp[s[i]]=i;
            }
            else{
                mp[s[i]]=i;
                count++;
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};
