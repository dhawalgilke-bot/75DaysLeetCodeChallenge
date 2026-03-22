class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int no=arr.size();
        vector<int>v;
        int i=0;
        int j=no-1;
        while(i<j){
            if(arr[i]+arr[j]==target){
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
            else if(arr[i]+arr[j]>target) j--;
            else i++;
        }
        return v;
    }
};