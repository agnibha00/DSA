#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int n ){
    map<int,int>v;

    for(int i =0;i<n-1;i++){
        if(v[a[i]]==0){
            v[a[i]]=1;
        }
        else{
            if(a[i]==a[i+1]){
                v[a[i]]++;
                i++;
            }
        }
    }
    v[a[n-1]]++;
    int maxFreq = 0;
    int maxElement = a[0];
    for(auto it : v) {
        if(it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }
    }
    int ans = maxElement ;
    return ans;
}


int main()
{
    vector<int>b;
    int t;
    cout<<"enter the number of times";
    cin>>t;
    while(t--){
    int n;
    cout<<"enter the value of the array";
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++){
        cin>>a[j];
    }

    int sol=solve(a,n);
    b.push_back(sol);

    for(auto it : b) {
    cout<< it<< endl;
    }
    }
    return 0;
}