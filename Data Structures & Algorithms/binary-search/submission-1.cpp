class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target) return i;
        }
        return -1;
    }
};

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {

//         int n=nums.size();
//         int l=0;
//         int r=n-1;
//         while(l<=r){
//             int mid = l+(r-l)/2;
//             if(nums[mid]==target) return mid;
//             else if (nums[mid]>target) r=mid-1;
//             else l=mid+1;
//         }
//         return -1;
//     }
// };
