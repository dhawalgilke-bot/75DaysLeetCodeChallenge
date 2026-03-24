class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>scount(26,0);
        vector<int>pcount(26,0);
        vector<int>ans;
        int m=p.size();
        int n=s.size();
        for(int j=0;j<m;j++) pcount[p[j]-'a']++;

        for(int i=0;i<n;i++){
            scount[s[i]-'a']++;
            if(i>m-1){
              scount[s[i-m]-'a']--;
            }
            bool anagram=true;
            for(int i=0;i<26;i++){
                if(scount[i]!=pcount[i]){
                      anagram=false;
                      break;
                }
            }
            if(anagram) ans.push_back(i-m+1);
        }
        return ans;
    }
};