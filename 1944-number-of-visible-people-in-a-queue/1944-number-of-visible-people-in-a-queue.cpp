class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n=arr.size();
        vector<int>b(n);
        stack<int>st;
        b[n-1]=0;
        st.push(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            int count=0;
            while(st.size()>0 && st.top()<arr[i]){
                st.pop();
                count++;
            }
           if(st.size()!=0) count++;
           b[i]=count;
           st.push(arr[i]);
           count=0;
        }
       return b;
    }
};