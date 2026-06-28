class Solution {
public:
    void reverseString(vector<char>& s) {
        int n =s.size();
        vector<char>ch;

        for(auto it:s){
            ch.push_back(it);
        }
        int k=0;
        for(int i=n-1;i>=0;i--){
            s[k++]=ch[i];
        }
    }
};