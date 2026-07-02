class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int n=s.size();
        int ans=0,len;
        unordered_map<int,int>mp;
        while(r<n){
            if(mp.find(s[r]) != mp.end()){
                if(mp[s[r]]>=l){
                    l=mp[s[r]]+1;
                }
            }

            len=r-l+1;
            ans=max(len,ans);
            mp[s[r]]=r;
            r++;

        }
        return ans;
    }
};