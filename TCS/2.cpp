/*
Problem Statement –

Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.

Constrains-

1<=N<=100

Example 1:

Input :

10  -> Integer

Output :

5    -> result- Integer

Explanation:

Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence output will print “5”.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="";
    int n ;
    cout<<"enter the number ";
    cin>> n;
    int ans=0;
    while(n!=0){
        int bit= n&1;
        s.push_back(bit+'0');
        n=n>>1;
    }   
    reverse(s.begin(),s.end());

    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            s[i]='1';
        }
        else{
            s[i]='0';
        }
    }
        int result = 0;
    for (int i = 0; i < s.length(); i++) {
        result = result * 2 + (s[i] - '0');
    }

    cout << "The solution is " << result;

    return 0;
}

// 101