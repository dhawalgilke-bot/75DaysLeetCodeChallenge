class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int no=nums.size();
        int j=0;
       for(int i=0;i<no;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
       }
       return ;
    }
};
    
        
