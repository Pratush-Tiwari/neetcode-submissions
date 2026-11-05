class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        int elem=nums[0];
        int freq=1;

        for(int i=0;i<n;i++){
            if(nums[i]==elem) freq++;
            else{
                freq--;
                if(freq==0){
                    elem=nums[i];
                    freq=1;
                }
            }
        }

        return elem;
    }
};