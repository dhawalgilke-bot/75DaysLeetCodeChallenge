class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>a(n,0);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temp[i]>temp[st.top()]){
                int index=st.top();
                st.pop();
                a[index]=i-index;
            }
            st.push(i);
        }
        return a;
    }
};