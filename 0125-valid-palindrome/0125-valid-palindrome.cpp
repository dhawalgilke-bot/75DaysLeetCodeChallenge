class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";

        // Step 1: filter + lowercase
        for(char c : s){
            if(isalnum(c)){
                a += tolower(c);
            }
        }

        // Step 2: two pointer check
        int i = 0;
        int j = a.size() - 1;

        while(i < j){
            if(a[i] != a[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};