// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n=numbers.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(numbers[i]+numbers[j]==target) return {i+1,j+1};
//             }
//         }
//         return {};
//     }
// };

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n=numbers.size();
//         map<int,int> mp;
//         for(int i=0;i<n;i++){
//             int a=numbers[i];
//             int b=target-a;
//             if(mp.find(b)!=mp.end()){
//                 return {mp[b]+1, i+1};
//             }
//             mp[a]=i;
//         }
//         return {};
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(numbers[l]+numbers[r]==target) return {l+1,r+1};
            else if(numbers[l]+numbers[r]>target) r--;
            else l++;
        }
        return {};
    }
};

