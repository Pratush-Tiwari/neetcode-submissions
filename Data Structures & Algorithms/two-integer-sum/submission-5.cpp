class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n=nums.size();

        vector<pair<int,int>> vp;
         
        for(int i=0;i<n;i++){
            vp.push_back({nums[i],i});
        }

        sort(vp.begin(),vp.end());

        int i=0;
        int j=n-1;

        while(i<j){
            if(vp[i].first + vp[j].first ==target) return vector<int>{min(vp[i].second, vp[j].second), max(vp[i].second, vp[j].second)};

            else if(vp[i].first + vp[j].first < target) i++;

            else j--;
        }

        return vector<int>{0,0};
        
    }
};
