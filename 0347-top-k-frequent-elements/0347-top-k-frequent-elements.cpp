class Solution {
public:
    static bool amp22(pair<int, int> a, pair<int, int> b) {

        if (a.second != b.second) {
            return a.second > b.second;
        }

        return a.first < b.first;
        
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> fre;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            fre[nums[i]]++;
        }
    vector<pair<int,int>> v(fre.begin(), fre.end());

        sort(v.begin(), v.end(), amp22);

        int count = 0;

        vector<int> ans;

        for (auto it : v) {

            ans.push_back(it.first);

            count++;

            if (count == k)
                break;
        }
        return ans;
    }
};