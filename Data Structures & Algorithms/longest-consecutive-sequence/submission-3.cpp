class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max=1;
        int n=nums.size();

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            int curr=nums[i];
            int count=1;

            for(int j=i+1;j<n;j++){
                if(nums[j]-1==curr){
                    curr++;
                    count++;
                    if(count>max){
                        max=count;
                    }
                }
            }
        }

        if (n==0) return 0;

        return max;
        
    }
};
