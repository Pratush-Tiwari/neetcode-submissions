// class Solution {
// public:
//     int maxArea(vector<int>& heights) {
//         int n=heights.size();
//         int maxi=0;

//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 maxi=max(maxi,(j-i)*min(heights[i],heights[j]));
//             }
//         }
//         return maxi;
//     }
// };


class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int maxi=0;
        int l=0;
        int r=n-1;

        while(l<r){
            maxi=max(maxi, (r-l)*min(heights[l],heights[r]));
            if(heights[l]<=heights[r]){
                l++;
            }else r--;
        }
        return maxi;
    }
};
