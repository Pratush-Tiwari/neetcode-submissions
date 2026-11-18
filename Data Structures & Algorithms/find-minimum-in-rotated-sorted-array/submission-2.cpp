// class Solution {
// public:
//     int findMin(vector<int> &nums) {
//         int n=nums.size();
//         int mini=INT_MAX;
//         for(int i =0;i<n;i++){
//             mini=min(mini,nums[i]);
//         }
//         return mini;        
//     }
// };


class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int mini=INT_MAX;

        while(l<=r){
            int mid= l + (r-l)/2;
            mini=min(mini,nums[mid]);
            if(nums[mid] >= nums[l] && nums[mid] >= nums[r]) l=mid+1;
            else r=mid-1;
        }
        return mini;
    }
};
