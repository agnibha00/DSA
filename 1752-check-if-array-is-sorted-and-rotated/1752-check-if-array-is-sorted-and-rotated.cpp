class Solution {
public:
    bool check(vector<int>& nums) {
        int t = 0;
        int n=nums.size();
        for (int i = 0; i < nums.size()-1; i++) {
        if(nums[i]>nums[i+1]){
            t++;
            if(t==2){
                return false;
            }
        }
        }
        if (nums[n - 1] > nums[0]) {
            t++;
            if(t==2){
                return false;
            }
        }
        
    return true;
    }
};