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
        int n;
        cin >> n;
        vector < int > v(n);
        map <int, int> m;
        set < int > s;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            s.insert (v[i]);
            s.insert(v[i] + 1);
            m[v[i]]++;
        }
        int ans = 0, last_value_occ = 0;
        for (auto cur_val : s) {
            ans = ans + max (0, (m[cur_val] -last_value_occ));
            last_value_occ = m[cur_val];
        }
        cout << ans << nl;
    }
}