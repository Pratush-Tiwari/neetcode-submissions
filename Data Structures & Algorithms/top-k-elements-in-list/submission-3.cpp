class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> mp;

        vector<int> result;

        int n=nums.size();

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        vector<pair<int,int>> vp;

        for(auto it:mp){
            vp.push_back({it.second, it.first});
        }

        sort(vp.begin(),vp.end());

      for(int i=vp.size()-1;i>=0;i--){
        if(k==0) break;
       result.push_back(vp[i].second);
       k--;
      }

      return result; 

      
    }
};
