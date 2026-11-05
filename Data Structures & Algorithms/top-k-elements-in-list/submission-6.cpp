class Solution {
public:
    static bool comp(pair<int,int> p1, pair<int,int> p2){
        if(p1.second>=p2.second) return true;
        return false;
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
        int j=0;

        vector<int> ans;

        while(k!=0){
            ans.push_back(vp[j].first);
            j++;
            k--;
        }

        return ans;
    }
};
