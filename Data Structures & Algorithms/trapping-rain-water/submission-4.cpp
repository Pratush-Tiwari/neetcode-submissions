// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n=height.size();
//         int ans=0;

//         for(int i=0;i<n;i++){
//             int elem=height[i];
//             int lmax=0;
//             int rmax=0;
//             for(int j=i-1;j>=0;j--){
//                 lmax=max(lmax,height[j]);
//             }
//             for(int j=i+1;j<n;j++){
//                 rmax=max(rmax,height[j]);
//             }
//             ans+=max(min(lmax,rmax)-height[i],0);
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n=height.size();
//         vector<int> pre(n,0);
//         vector<int> post(n,0);
//         int maxpre=0;
//         int maxpost=0;
//         int ans=0;

//         for(int i=0;i<n;i++){
//             pre[i]=maxpre;
//             maxpre=max(maxpre,height[i]);
//         }
//         for(int i=n-1;i>=0;i--){
//             post[i]=maxpost;
//             maxpost=max(maxpost,height[i]);
//         }
//         for(int i=0;i<n;i++){
//             ans+=max(min(pre[i],post[i])-height[i],0);
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int lmax=0;
        int rmax=0;
        int l=0;
        int r=n-1;
        int ans=0;

        while(l<=r){
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);
            if(height[l]<=height[r]){
                ans+=max(min(lmax,rmax)-height[l],0);
                l++;
            }
            else{
                ans+=max(min(lmax,rmax)-height[r],0);
                r--;
            }
        }
        return ans;
    }
};
