class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        int ans=0;
        int sum=0;
        while(i<j){
            int water=min(arr[i],arr[j]);
            ans=water*(j-i);
            if(arr[i]<arr[j]){    
              i++;
            }
            else{
                j--;
            }
           sum=max(sum,ans);
        }
        return sum;
    }
};