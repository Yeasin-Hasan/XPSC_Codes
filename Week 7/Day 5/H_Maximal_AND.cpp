//Problem_Name: Maximal AND
//Problem_Link: https://codeforces.com/problemset/problem/1669/H

//^-^-^-^-^-^-^-^-^-^-^||
//________YEASIN_______||
//___HASAN______EMAL___||
//^-^-^-^-^-^-^-^-^-^-^||
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        int n, k;
        cin >> n >> k;
        vector < ll > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector < ll > hash(31);
        for (int i = 0; i < n; i++) {
            for (int j = 30; j >= 0; j--) {
                if ((v[i]>>j) & 1) {
                    hash[j]++;
                }
            }
        }

        ll ans = 0;
        for (ll i = 30; i >= 0; i--) {
            if (hash[i] == n) {
                ans += (1LL << i);
            }
            else {
                ll need = n - hash[i];
                if (k >= need) {
                    ans += (1LL << i);
                    k -= need;
                }
            }
        }
        cout << ans << nl;
    }
}