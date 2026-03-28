class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
         int t[26];
        int l=0;
        int maxfreq=0;
        int ans=0;
        for(int r=0;r<n;r++){
            char ch=s[r];
            int idx=ch-'A';
            t[idx]++;
            maxfreq=max(maxfreq,t[idx]);
            while((r-l+1)-maxfreq>k){
                t[s[l]-'A']--;
                l++;
            }
         ans=max(ans,r-l+1);
        }
        return ans;
    }
};