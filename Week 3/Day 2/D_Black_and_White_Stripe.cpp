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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector < int > v(n);
        if (s[0] == 'B') v[0] = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == 'B') v[i] = v[i-1] + 1;
            else v[i] = v[i-1];
        }
        int i = 0, j = m-1;
        int mx = 0;
        while (j < n) {
            int total = 0;
            if (i == 0) total = v[j];
            else total = v[j] - v[i-1];
            if (total > mx) mx = total;
            i++;
            j++;
        }
        cout << m-mx << nl;
    }
}