//Problem_Name: Permutation Swap
//Problem_Link: https://codeforces.com/problemset/problem/1828/B

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
        vector < int > v(n+1), h;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            h.push_back(abs(v[i]-i));
        }
        sort (h.begin(), h.end());
        int ans = h[0];
        for (int i = 1; i < n; i++) {
            ans = __gcd(ans, h[i]);
        }
        cout << ans << "\n";
    }
}