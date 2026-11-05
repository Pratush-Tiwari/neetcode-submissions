class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> pre(n,0);
        vector<int> post(n,0);
        int maxpre=0;
        int maxpost=0;
        int ans=0;

        for(int i=0;i<n;i++){
            pre[i]=maxpre;
            maxpre=max(maxpre,height[i]);
        }
        for(int i=n-1;i>=0;i--){
            post[i]=maxpost;
            maxpost=max(maxpost,height[i]);
        }
        for(int i=0;i<n;i++){
            ans+=max(min(pre[i],post[i])-height[i],0);
        }
        return ans;
    }
};
