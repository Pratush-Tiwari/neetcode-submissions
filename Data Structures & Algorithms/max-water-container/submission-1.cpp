class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int max=0;
        int ans=0;

        while(i<j){
            int l=j-i;
            ans=min(heights[i],heights[j])*l;
            
            if(ans>max)max=ans;

            if(heights[i]<=heights[j]) i++;
            else if (heights[i]>heights[j]) j--;
        }
        return max;
        
    }
};
