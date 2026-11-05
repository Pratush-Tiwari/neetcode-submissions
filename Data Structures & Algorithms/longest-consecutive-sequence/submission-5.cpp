class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<=1) return n;

        int l=0;
        int elem = nums[l];
        int count=1;
        int maxi=1;

        while(l<n-1){
            if(nums[l+1]==nums[l]) {l++; continue;}
            if(nums[l+1]-nums[l]==1){
                l++;
                count++;
                elem=nums[l+1];
                maxi=max(maxi,count);
            }
            else{
                l++;
                count=1;
                elem=nums[l+1];
            }
        }
        return maxi;
    }
};
