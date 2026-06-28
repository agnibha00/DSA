class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        for(int i =0;i<numbers.size();i++){
            int a = target-numbers[i];

            if(mp.find(a) != mp.end()){
                return {mp[a]+1,i+1};
            }
            else{
                mp[numbers[i]]=i;
            }
        }
        return {};
    }
};