class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int k=0;

        vector<int> temp;

        for(int i=0;i<n;i++){
            if(nums[i]!=val) {
                temp.push_back(nums[i]);
                k++;
            }
        }
        int c=n-k;
        for(int i=0;i<c;i++){
            temp.push_back(0);
        }
        nums=temp;
        return k;     
    }
};