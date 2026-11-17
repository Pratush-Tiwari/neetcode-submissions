// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<string> cop=strs;
//         vector<vector<string>> ans;

//         int n=strs.size();
//         for(int i=0;i<n;i++){
//             sort(cop[i].begin(),cop[i].end());
//         }

//         for(int i=0;i<n;i++){
//             vector<string> temp;
//             if(cop[i]!="myrandomstring"){
//                 temp.push_back(strs[i]);
//                 for(int j=i+1;j<n;j++){
//                     if(cop[i]==cop[j]) {
//                         cop[j]="myrandomstring";
//                         temp.push_back(strs[j]);
//                     }
//                 }
//                 ans.push_back(temp);
//             }
//         }
//         return ans;
        
//     }
// };


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        int n=strs.size();
        for(int i=0;i<n;i++){
            string sorted_s = strs[i];
            sort(sorted_s.begin(),sorted_s.end());
            mp[sorted_s].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};

// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<vector<int>, vector<string>> mp;

//         int n=strs.size();
//         for(int i=0;i<n;i++){
//             vector<int> temp(26,0);
//             for(int j=0;j<strs[i].length();j++){
//                 temp[strs[i][j]-'a']++;
//             }
//             mp[temp].push_back(strs[i]);
//         }

//         vector<vector<string>> ans;
//         for(auto it:mp){
//             ans.push_back(it.second);
//         }
        
//         return ans;
//     }
// };
