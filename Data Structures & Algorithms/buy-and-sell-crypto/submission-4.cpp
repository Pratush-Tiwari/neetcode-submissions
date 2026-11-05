// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int maxi=0;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 maxi=max(maxi,prices[j]-prices[i]);
//             }
//         }
//         return maxi;
//     }
// };


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<=1) return 0;
        int maxi=0;
        int mini=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<mini) mini = prices[i];
            else maxi=max(maxi,prices[i]-mini); 
        }
        return maxi;
    
    }
};

