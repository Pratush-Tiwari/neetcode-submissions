// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n=matrix.size();
//         int m=matrix[0].size();

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==target) return true;
//             }
//         }
//         return false;  
//     }
// };


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0;
        int r=m*n-1;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(matrix[mid/m][mid%m]==target) return true;
            else if(matrix[mid/m][mid%m]>target) r=mid-1;
            else l=mid+1;
        }
        return false;  
    }
};
