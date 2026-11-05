// class Solution {
// public:
//     static bool comp(pair<int,int> p1, pair<int,int> p2){
//         return p1.second > p2.second;
//     }

//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         map<int,int> mp;

//         for(int i:nums) mp[i]++;

//         vector<pair<int,int>> vp(mp.begin(),mp.end());
//         sort(vp.begin(),vp.end(),comp);

//         vector<int> ans;
//         for (int i = 0; i < k; ++i) {
//             ans.push_back(vp[i].first);
//         }

//         return ans;
//     }
// };


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mp;
        for(int i:nums) mp[i]++;

        vector<vector<int>> vp(n + 1);

        for(auto it:mp){
            vp[it.second].push_back(it.first);
        }
        for(int i=0;i<=n;i++){
            cout<<vp[i].size();
        }
        cout<<endl;

        vector<int> ans;
        for (int i = n; i >=0; i--) {
            while(k!=0 && !vp[i].empty()) {
                int j=vp[i].size();
                ans.push_back(vp[i][j-1]);
                j--;
                vp[i].pop_back();
                k--;
            }
        }

        return ans;
    }
};
