class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
    int odd=0;
    int even=0;
    int minodd=INT_MAX;
    int mineven=INT_MAX;
    for(int i=0;i<n;i++){
        if(nums1[i]%2!=0){
            odd++;
            if(minodd>nums1[i])
            minodd=nums1[i];
        }
        else{
            even++;
            if(mineven>nums1[i])
            mineven=nums1[i];
        }
    }
    if(odd==0 || even==0) return true;
    else if(mineven>minodd) return true;
    else return false;
    }
};