/*
You are given a function.
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.
str is a valid password if it satisfies the below conditions.

– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number
Assumption:
Input string will not be empty.

Example:

Input 1:
aA1_67
Input 2:
a987 abC012

Output 1:
1
Output 2:
0
*/

#include <bits/stdc++.h>
using namespace std;

int checkpassword(string str, int n){
    if(n<4){
        return 0;
    }
    if(str[0] >= '0' && str[0] <= '9'){
        return 0;
    }

    int d=0,c=0, a=0;
    while(a<n){

        char s = str[a];
        if(s ==' ' || s =='/'){
            return 0;
        }
        else if(s>='A' && s<='Z'){
            c++;
        }

        else if(s >= '0' && s <= '9'){
            d++;
        }

        a++;
    }
    return c>0 && d>0;
}
int main()
{
    cout<<"Enter the string \n";
    string s;
    getline(cin,s);
    int len =s.size();

    cout << checkpassword (s, len);
    return 0;
}