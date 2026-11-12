// class Solution {
// public:
//     bool find(string s1,string s2){
//         int n=s1.length();
//         int m=s2.length();
//         int l=0; int k=0;
//         for(int i=0;i<m;i++){
//             if(s1[l]==s2[i] && l==n-1) return true;
//             if(s1[l]==s2[i]) l++;
//             else l=0;
//         }
//         return false;
//     }

//     void rec(string s, vector<int> &seen, vector<string> &ans, string base, int n){
//         if(s.length()==n) {
//             ans.push_back(s);
//             return;
//         }
//         for(int i=0;i<n;i++){
//             if(seen[i]==0){
//                 seen[i]=1;
//                 s+=base[i];
//                 rec(s,seen,ans,base,n);
//                 seen[i]=0;
//             }
//         }
//     }

//     bool checkInclusion(string s1, string s2) {
//         vector<string> ans;
//         vector<int> seen(s1.length(),0);
//         rec("", seen, ans, s1, s1.length());
//         int n=ans.size();

//         for(int i=0;i<n;i++){
//             if(find(ans[i],s2)) return true;
//         }
//         return false;
//     }
// };



class Solution {
public:   
    bool match(map<char,int> mp1, map<char,int> mp2){
        for(auto it:mp1){
            if(mp2[it.first]!=it.second)return false;
        }
        for(auto it:mp2){
            if(mp1[it.first]!=it.second)return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        map<char,int> mp1;
        map<char,int> mp2;

        for(int i=0;i<n;i++){
            mp1[s1[i]]++;
        }

        int l=0;
        int r=0;
        while(r<n){
            mp2[s2[r]]++;
            r++;
        }

        while(r<=m){
            if(match(mp1,mp2)) return true;
            else{
                if(r<m) mp2[s2[r]]++;
                r++;
                mp2[s2[l]]--;
                l++;
            }
        }
        return false;
    }
};
