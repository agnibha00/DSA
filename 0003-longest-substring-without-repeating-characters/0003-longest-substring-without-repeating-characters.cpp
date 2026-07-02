class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int n = s.size();
        unordered_map<int, int> mp;
        int count = 0, ans = 0;
        while (r < n) {
            // if common found 
            if (mp.find(s[r]) != mp.end()) {
                if (mp[s[r]] >= l) {
                    l = mp[s[r]] + 1;
                    
                }

            }
            count = r - l + 1;
            ans = max(count, ans);
            mp[s[r]]=r;
            r++;
        }
        return ans;
    }
};