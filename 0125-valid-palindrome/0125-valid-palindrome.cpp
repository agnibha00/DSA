class Solution {
public:
    bool isPalindrome(string s) {
        string g="";
        string h="";
        for(char ch: s){
            if(isalnum(ch)){
                ch = tolower(ch);
                g+=ch;
                h+=ch;
            }
        }
        reverse(g.begin(),g.end());
        if(g==h) return true;
        return false;
    }
};