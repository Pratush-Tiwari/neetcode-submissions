class Solution {
public:
    int trap(vector<int>& height) {

        int ans=0;
        int n=height.size();
        int l=0;
        int r=0;


        vector<int>lm(n,0);
        vector<int>rm(n,0);

        for(int i=1;i<n;i++){
            l=max(l,height[i-1]);
            lm[i]=l;
        }
        for(int i=n-2;i>=0;i--){
            r=max(r,height[i+1]);
            rm[i]=r;
        }

        for(int i=0;i<n;i++){
            if(lm[i]>height[i] && rm[i]>height[i]){
                ans+=min(lm[i],rm[i])-height[i];
            }
        }

        
        return ans;
        
    }
};
