#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int p = 0, q = 0;
        int n = g.size();
        int y = s.size();

        while(p < n && q < y){
            if(g[p] <= s[q]){
                p++;   // child satisfied
            }
            q++;       // move to next cookie
        }

        return p;   // number of satisfied children
    }
};

int main() {
    int n, m;

    cout << "Enter number of children: ";
    cin >> n;

    vector<int> g(n);
    cout << "Enter greed factors: ";
    for(int i = 0; i < n; i++){
        cin >> g[i];
    }

    cout << "Enter number of cookies: ";
    cin >> m;

    vector<int> s(m);
    cout << "Enter cookie sizes: ";
    for(int i = 0; i < m; i++){
        cin >> s[i];
    }

    Solution obj;
    int result = obj.findContentChildren(g, s);

    cout << "Maximum number of satisfied children: " << result << endl;

    return 0;
}