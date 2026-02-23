#include <bits/stdc++.h>
using namespace std;

int pow(int n, int p){
    if(p==0){
        return 1;
    }
    if(p==1){
        return n;
    }

    return n *pow(n,p-1);

}


int main()
{
    int n, p;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;

    int result = pow(n,p);
    cout<< result;
    return 0;
}