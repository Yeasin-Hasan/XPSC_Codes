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
    int t;
    cin >> t;    
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        map <int, set <int> > m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]].insert(i);
        }
        while (q--) {
            int x, y;
            cin >> x >> y;
            if (m.find(x) == m.end() || m.find(y) == m.end()) no;
            else if (*m[x].begin() > *m[y].rbegin()) no;
            else yes;
        }
    }
}