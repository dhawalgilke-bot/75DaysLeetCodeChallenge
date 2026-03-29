class Solution {
public:
    bool isValid(string s) {
      int no=s.size();
      if(no==0 || no==1) return false;
      stack<int>a;
      for(int i=0;i<no;i++){
        char ch=s[i];
        if(ch=='(' || ch=='[' || ch=='{'){
            a.push(ch);
        }
        else {
            if(a.empty()) return false;
            if((a.top()=='(' && ch==')') ||(a.top()=='[' && ch==']') || (a.top()=='{' && ch=='}')){
                a.pop();
            }
            else return false;
        }
      }
       return a.empty();
    }
};