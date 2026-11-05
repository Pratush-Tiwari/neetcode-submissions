class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int ans=0;
        int n=prices.size();
        if(n==0)return 0;
        int a=prices[0];

        for(int i=1;i<n;i++){
            if(prices[i]>a) ans=max(ans, prices[i]-a);
            else a=prices[i];
        }
       
        return ans;
        
    }
};
