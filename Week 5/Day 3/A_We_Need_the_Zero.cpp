//Problem_Link: https://codeforces.com/problemset/problem/1805/A

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
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans;
        int flag = 0;
        for (int i = 0; i < 256; i++) {
            int Xor = 0;
            for (int j = 0; j < n; j++) {
                Xor ^= (a[j]^i);
            }
            if (Xor == 0) {
                flag = 1;
                ans = i; 
                break;
            }
        }
        if (flag) cout << ans << nl;
        else cout << "-1" << nl;
    }
}