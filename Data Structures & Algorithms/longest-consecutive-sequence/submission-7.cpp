class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return n;

        sort(nums.begin(),nums.end());

        int l=0;
        int count=1;
        int maxi=1;
        while(l<n-1){
            if(nums[l+1]==nums[l]){
                l++; continue;
            }
            if(nums[l+1]-nums[l]==1){
                l++;
                count++;
                maxi=max(maxi,count);
            }
            else{
                l++;
                count=1;
            }
        }
        return maxi;
    }
};
