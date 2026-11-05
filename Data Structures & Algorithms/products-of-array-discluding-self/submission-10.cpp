// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> ans;

//         for(int i=0;i<n;i++){
//             int mult=1;
//             for(int j=0;j<n;j++){
//                 if(j!=i){
//                     mult=mult*nums[j];
//                 }
//             }
//             ans.push_back(mult);
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> ans;
//         int zc=0;
//         int mult=1;

//         for(int i=0;i<n;i++){
//             if(nums[i]==0) zc++;
//              if(nums[i]!=0) mult*=nums[i];
//         }

//         if(zc>1) return vector<int> (n,0);

//         if(zc==1){
//             for(int i=0;i<n;i++){
//             if(nums[i]==0)ans.push_back(mult);
//             else ans.push_back(0);
//             }
//         }

//         else {
//             for(int i=0;i<n;i++){
//             ans.push_back(mult/nums[i]);
//             }
//         }
//         return ans;
//     }
// };





class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> pre(n,0);
        vector<int> post(n,0);

        for(int i=0;i<n;i++){
            if(i>0) pre[i]=pre[i-1]*nums[i];
            else pre[i]=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1) post[i]=nums[i];
            else post[i]=nums[i]*post[i+1];
        }

        post.push_back(1);

        for(int i=0;i<n;i++){
            if(i==0) ans.push_back(post[i+1]);
            else ans.push_back(pre[i-1]*post[i+1]);
        }
        return ans;
    }
};



