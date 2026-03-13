class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n);
        a[0]=nums[0];
        for(int i=1;i<n;i++){
            a[i]=a[i-1]+nums[i];
        }
        return a;
    }
};