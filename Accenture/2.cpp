#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string ";
    cin>>s;
    int result=s[0]-'0';
    for(int i =1;i<s.size();i+2){
        if(s[i]=='A' ){
            result &= s[i+1]-'0';
        }
            if(s[i]=='B' ){
            result |= s[i+1]-'0';
        }
            if(s[i]=='C' ){
            result ^= s[i+1]-'0';
        }
    }
    cout<<result;
    return 0;
}