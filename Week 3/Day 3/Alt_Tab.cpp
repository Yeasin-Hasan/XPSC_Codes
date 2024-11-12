//^-^-^-^-^-^-^-^-^-^-^||
//________YEASIN_______||
//___HASAN______EMAL___||
//^-^-^-^-^-^-^-^-^-^-^||
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    fast;
    int n;
    cin >> n;
    vector <string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    string s;
    map <string, int> m;
    for (int i = n-1; i >= 0; i--) {
        int l = v[i].size();
        if(m[v[i]] == 0) {
            s.push_back(v[i][l-2]);
            s.push_back(v[i][l-1]);
            m[v[i]]++;
        }
    }
    cout << s;
}