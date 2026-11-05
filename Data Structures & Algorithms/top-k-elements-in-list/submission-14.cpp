class Solution {
public:
    static bool comp(pair<int,int> p1, pair<int,int> p2){
        return p1.second>=p2.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        vector<pair<int,int>> vp;
        for(auto it:mp){
            vp.push_back({it.first,it.second});
        }

        sort(vp.begin(),vp.end(),comp);

        vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(vp[i].first);
        }

        return ans;
    }
};
