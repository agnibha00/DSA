class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>a;
        unordered_map<int,int>b;
        if(s.size() != t.size()){
            return false;
        }
        else{
            for(int i =0;i<s.size();i++){
                int x=s[i];
                int y=t[i];
                a[x]++;
                b[y]++;
            }
        for(auto it: a ){
            if(b[it.first]!= it.second){
                return false;
            }
        }
        }
        return true;
    }
};