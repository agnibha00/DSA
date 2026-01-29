
// Infix to Postfix Conversion (Accenture – 2024)

/*
Question:

You are given an arithmetic expression in infix notation.
Convert the given expression into its postfix notation using a stack.

The expression may contain:

Operands (A–Z / a–z / 0–9)

Operators: + , - , * , /

Parentheses: ( and )

Operator precedence:

* , /  → higher precedence
+ , -  → lower precedence


Rules:

Operands are directly added to the postfix expression.

Operators are pushed to the stack based on precedence.

Parentheses must be handled properly.

Print the postfix expression as output.

Example 1
Input:   A+B
Output:  AB+

Example 2
Input:   (A+B)*C
Output:  AB+C*

Example 3
Input:   A+B*C
Output:  ABC*+

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a ;
    cout<<"enter the value ";
    cin>>a;
    string result="";
    stack<char> j;
    for(int i=0;i<a.size();i++){
        if(a[i]=='+' || a[i]=='-' ||a[i]=='*' || a[i]=='/' || a[i]=='('){
            j.push(a[i]);
        }
        else if(a[i]==')'){
            while(!j.empty() && j.top()!='('){
                result += j.top();
                j.pop();
            }
            j.pop();
        }
        else{
            result+=a[i];
        }
    }
    while(!j.empty()){
        result +=j.top();
        j.pop();
    }
    cout<<result;
    return 0;
}