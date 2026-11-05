// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n=nums.size();
//         if(n<=1) return n;

//         sort(nums.begin(),nums.end());

//         int l=0;
//         int count=1;
//         int maxi=1;
//         while(l<n-1){
//             if(nums[l+1]==nums[l]){
//                 l++; 
//                 continue;
//             }
//             if(nums[l+1]-nums[l]==1){
//                 l++;
//                 count++;
//                 maxi=max(maxi,count);
//             }
//             else{
//                 l++;
//                 count=1;
//             }
//         }
//         return maxi;
//     }
// };



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return n;
        unordered_set<int> st;
        int maxi=0;

        for(int it:nums){
            st.insert(it);
        }
        for(auto it:st){
            int elem = it;
            if(st.count(elem-1))continue;
            int count=0;
            while(st.count(elem)){
                elem=elem+1;
                count++;
                maxi=max(maxi,count);
            }
        }

        return maxi;
    }
};
