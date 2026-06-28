class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>a;
        map<char,int>b;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            a[s[i]]++;
            b[t[i]]++;
        }
        bool ans=false;
        for(auto it=a.begin();it!=a.end();it++){
            if(b[it->first]==it->second){
                ans=true;
            }
            else{
                return false;
            }
        }
        return ans;
    }
};