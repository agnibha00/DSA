#include <bits/stdc++.h>
using namespace std;

int main()
{
unordered_map<int,int> a;
        int n, m;

    // Size of first array
    cout<<"Enter the size of the first array";

    cin >> n;
    

    // Elements of first array
    for (int i = 0; i < n; i++) {
    cout<<"Enter the "<< i << " value";

        int x;
        cin >> x;
        a[x]=1;
    }

    // Size of second array
    cout<<"Enter the size of the second array";

    cin >> m;

    // Elements of second array
    for (int i = 0; i < m; i++) {
    cout<<"Enter the "<< i << " value";

        int y;
        cin >> y;
        a[y]=1;
    }

    for(auto it : a){
        cout<< it.first<< " ";
    }


    return 0;
}