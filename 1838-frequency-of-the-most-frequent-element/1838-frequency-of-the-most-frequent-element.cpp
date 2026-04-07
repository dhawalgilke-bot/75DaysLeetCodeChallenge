class Solution {
public:
int binarysearch(int targetidx,int k,vector<int>&nums,vector<long>&prefixsum){
    int target=nums[targetidx];
    int l=0;
    int r=targetidx;
    int bestidx=targetidx;
    while(l<=r){
        int mid=l+(r-l)/2;
        long count=(targetidx-mid+1);
        long windowsum=count*target;

        int currentsum=prefixsum[targetidx]-prefixsum[mid]+nums[mid];

        int ops=windowsum-currentsum;
        if(ops>k){
            l=mid+1;
        }
        else{
            bestidx=mid;
            r=mid-1;
        }
    }
    return targetidx-bestidx+1;
}

    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<long>prefixsum(n);
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        int result=0;
        for(int targetidx=0;targetidx<n;targetidx++){
            result=max(result,binarysearch(targetidx,k,nums,prefixsum));
        }
        return result;
    }
};