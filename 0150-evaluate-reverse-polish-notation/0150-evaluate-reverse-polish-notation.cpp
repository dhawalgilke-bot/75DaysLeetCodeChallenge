class Solution {
public:
int oper(int a,int b,string s){
   if(s=="+") return a+b;
    if(s=="-") return a-b;
     if(s=="*") return (long)a*(long)b;
      if(s=="/") return a/b;;
      return -1;
}
    int evalRPN(vector<string>& s) {
        int n=s.size();
        stack<int>st;
        for(int i=0;i<n;i++){
   if(s[i]=="+" || s[i]=="-" || s[i]=="*" || s[i]=="/"){
    int b=st.top();
       st.pop();
       int a=st.top();
       st.pop();
       int result=oper(a,b,s[i]);
       st.push(result);
   }
   else{
    st.push(stoi(s[i]));
   }
        }
     return st.top();
    }
};