class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ro=matrix.size();
        int co=matrix[0].size();
        int lo=0;
        int hi=(ro*co)-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int row=mid/co;
            int col=mid%co;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]>target) hi=mid-1;
            else lo=mid+1;
        }
     return false;
    }
};