class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;
    }
};


// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int n=s.length();
//         int m=t.length();
//         if(n!=m) return false;

//         unordered_map<char,int> mp1;
//         unordered_map<char,int> mp2;

//         for(int i=0;i<n;i++){
//             mp1[s[i]]++;
//             mp2[t[i]]++;
//         }

//         for(int auto it:mp1){
//             if(mp2[it.first]!=it.second) return false;
//         }
//         for(int auto it:mp2){
//             if(mp1[it.first]!=it.second) return false;
//         }
        
//         return true;
//     }
// };
