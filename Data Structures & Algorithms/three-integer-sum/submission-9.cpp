// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size();
//         set<vector<int>> st;
//         vector<vector<int>> vp;
//         sort(nums.begin(),nums.end());

//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     if(nums[i]+nums[j]+nums[k]==0) st.insert({nums[i],nums[j],nums[k]});
//                 }
//             }
//         }
//         for(auto it:st){
//             vp.push_back(it);
//         }
//         return vp;
//     }
// };


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> vp;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int l=i+1;
            int r=n-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                   vp.push_back({nums[i],nums[l],nums[r]}); 
                   int le=nums[l];
                   int re=nums[r];
                   while(nums[l]==le && l<n-1){
                    l++;
                   }
                   while(nums[r]==re && r>0){
                    r--;
                   }
                }
                else if(nums[i]+nums[l]+nums[r]<0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }

        return vp;
    }
};

