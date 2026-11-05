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
        set<vector<int>> st;
        vector<vector<int>> vp;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                   st.insert({nums[i],nums[l],nums[r]}); 
                   l++;
                }
                else if(nums[i]+nums[l]+nums[r]<0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }

        for(auto it:st){
            vp.push_back(it);
        }

        return vp;
    }
};

