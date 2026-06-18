class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> check;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            if(check.find(nums[i]) == check.end()){
                check[nums[i]]=1;
                ans.push_back(nums[i]);
            }
        }
        for(int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }
        return ans.size();
    }
};