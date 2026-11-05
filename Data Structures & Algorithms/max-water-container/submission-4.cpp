class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n=heights.size();
        int maxi=0;
        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans=(j-i)*min(heights[i],heights[j]);
                maxi=max(maxi,ans);
            }
        }

      
        return maxi;
        
    }
};
