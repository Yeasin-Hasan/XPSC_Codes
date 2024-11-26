//Problem_Link: https://www.codechef.com/problems/MINMXOR

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
        int Xor = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            Xor ^= a[i];
        }
        int ans = Xor;
        for (int i = 0; i < n; i++) {
            int flag = a[i] ^ Xor;
            ans = min (ans, flag);
        }
        cout << ans  << nl;
    }
}