class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();
        int product=1;
        int zcount=0;
        vector<int> v;

        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                product*=nums[i];
            }
            else{
                zcount++;
            }
        }

        if(zcount>1) {
            for(int i=0;i<n;i++){
                v.push_back(0);
            }
        }

        else{
            for(int i=0;i<n;i++){
                if(nums[i]!=0 && zcount==0) v.push_back(product/nums[i]);
                else if(nums[i]!=0 && zcount==1) v.push_back(0);
                else if(nums[i]==0) v.push_back(product);
            }
        }
        return v;


    }
};
