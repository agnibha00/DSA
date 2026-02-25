#include <bits/stdc++.h>
using namespace std;


struct item{
    int val;
    int wt;
};

bool comp(item a, item b){
    double r1=(double)a.val/a.wt;
    double r2=(double)b.val/b.wt;
    return r1>r2;
}

int main()
{
    int n;
    cout<<" enter the size of the array: ";
    cin>> n;

    item a[n];
    
    for(int i =0;i<n;i++){
        cout<<"enter the value of the "<< i << " elements of the array: ";
        cin>>a[i].val;
    }

    for(int i =0;i<n;i++){
        cout<<"enter the weight of the"<< i << " elements of the array: ";
        cin>>a[i].wt;
    }

    int capacity;
    cout << "Enter knapsack capacity: ";
    cin >> capacity;
    double total =0.0;
    sort(a,a+n,comp);
    for(int i = 0; i < n; i++){
        if(capacity>=a[i].wt){
            capacity -=a[i].wt;
            total +=a[i].val;
        }
        else{
            total += capacity*((double)a[i].val/a[i].wt);
            break;
        }

    }

    cout << "Maximum value = " << total << endl;
    
    return 0;
}