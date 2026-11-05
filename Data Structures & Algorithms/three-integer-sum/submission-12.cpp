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

        for(int i=0;i<n;i++){
            set<int> hash;
            for(int j=i+1;j<n;j++){
                int target = -(nums[i]+nums[j]);
                if(hash.count(target)){
                    vector<int> triplet = {nums[i], nums[j], target};
                    sort(triplet.begin(), triplet.end());
                    st.insert(triplet);
                }
                hash.insert(nums[j]);
            }    
        }
        for(auto it:st){
            vp.push_back(it);
        }
        return vp;
    }
};


// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>> vp;
//         sort(nums.begin(),nums.end());

//         for(int i=0;i<n;i++){
//             while(i!=0 && i<n && nums[i]==nums[i-1]){
//                 i++;
//             }
//             int l=i+1;
//             int r=n-1;
//             while(l<r){
//                 if(nums[i]+nums[l]+nums[r]==0){
//                    vp.push_back({nums[i],nums[l],nums[r]}); 
//                    int le=nums[l];
//                    int re=nums[r];
//                    while(nums[l]==le && l<n-1){
//                     l++;
//                    }
//                    while(nums[r]==re && r>0){
//                     r--;
//                    }
//                 }
//                 else if(nums[i]+nums[l]+nums[r]<0){
//                     l++;
//                 }
//                 else{
//                     r--;
//                 }
//             }
//         }

//         return vp;
//     }
// };

