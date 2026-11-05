class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max=1;
        int n=nums.size();
        int count=1;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n-1;i++){
            if(nums[i+1]-1==nums[i]){
                count++;
                if(count>max){
                    max=count;
                }
            }
            else if (nums[i+1]==nums[i]){
                continue;
            }
            else{
                count=1;
            }
        }

        if (n==0) return 0;

        return max;
        
    }
};
