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
    int n, q;
    cin >> n >> q;
    int a[n];
    vector <int> v(n);
    map < int, int > m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n-1; i >= 0; i--) {
        m[a[i]]++;
        v[i] = m.size();
    }
    while (q--) {
        int x;
        cin >> x;
        int ans = v[x-1];
        cout << ans << nl;
    }
}