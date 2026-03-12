class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int no=nums.size();
    for(int i=0;i<no;i++){
        for(int j=i+1;j<no;j++){
            if((nums[i]+nums[j])==target){
                return {i,j};
            }
        }
    }
    return{};
    }
};
    