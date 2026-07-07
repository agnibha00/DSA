class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s;

        for(auto it:arr){
            s.insert(it);
        }

        unordered_map<int,int>mp;
        int r=1;

        for(int it:s){
            mp[it]=r;
            r++;
        }

        vector<int>ans;
        for(auto it:arr){
            ans.push_back(mp[it]);
        }
        return ans;
    }
};