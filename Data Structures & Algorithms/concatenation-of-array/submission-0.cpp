class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> vp(2*n,0);

        for(int i=0;i<n;i++){
            vp[i]=nums[i];
            vp[n+i]=nums[i];
        }
        return vp;
        
    }
};