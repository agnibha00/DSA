class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int l=0;
        int r=0;
        int n =s.size();
        int ans=0;
        int result=INT_MIN;
        if(n==0){
            int r=0;
            return r;
        }
        while(r<n){
            if(mp.find(s[r])!=mp.end() && l<=mp[s[r]]){
                l=mp[s[r]]+1;
            }
            ans=r-l+1;
            result=max(ans,result);
            mp[s[r]]=r;
            r++;
        }
        return result;
    }
};