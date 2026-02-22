#include <bits/stdc++.h>
using namespace std;

// -2144 jkshgkajhv32

int solve(string s, long long result, int i, int sign){
    if(i>=s.size() || s[i]<'0' || s[i]>'9'){
        return sign* result;
    }

    int digit= s[i]-'0';
    if(result>(LLONG_MAX-digit)/10){
        return sign==1? INT_MAX:INT_MIN ;
    }

    result = result *10+digit;
    return solve(s,result, i+1, sign);
}

int main()
{
    string s;
    cout<<"enter the string ";
    cin>>s;

    int i =0;
    int sign =1;


    while(i<s.size() && s[i]==' ') i++;

    else if(s[i]=='-') {
        sign = -1;
        i++;
    }
    else if(s[i]=='+') {
        i++;
    }

    
    int sol= solve(s,0,i,sign);
   
    cout<< sol;
    return 0;
}