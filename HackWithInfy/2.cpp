#include <bits/stdc++.h>
using namespace std;

bool check(long long a, long long b, long long c, long long x, long long y){

    if(a + b + c != x + y)
        return false;

    if( (x >= b && y >= c) || (x >= c && y >= b) )
        return true;

    if( (x >= a && y >= c) || (x >= c && y >= a) )
        return true;

    if( (x >= a && y >= b) || (x >= b && y >= a) )
        return true;

    return false;
}

int main()
{
    int T;
    cin >> T;

    while(T--){
        long long a,b,c,x,y;
        cin >> a >> b >> c >> x >> y;

        if(check(a,b,c,x,y))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}