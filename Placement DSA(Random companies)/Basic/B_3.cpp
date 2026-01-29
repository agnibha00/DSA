//	Factorial recursively. (Wipro – 2023)

/*
Problem Statement:
Write a program to find the factorial of a given number using recursion.

Input:
An integer n

Output:
Factorial of n

Constraints:
0 ≤ n ≤ 12

*/
#include <bits/stdc++.h>
using namespace std;

int fac(int x){

    if(x==0 || x==1){
        return 1;
    }
    return x *fac(x-1);
}

int main()
{
    int a;
    cout<<"enter a integer " ;
    cin>> a;
    int b=fac(a);
    cout<<"The factorial of "<<a<<" is "<<b;
    return 0;
}