//Problem_Link: https://codeforces.com/problemset/problem/1747/B

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
        cout << ceil (1.0*n/2) << nl;
        if (n%2 == 0) {
            for (int i = 2, j = 3*n; i <= (3*n)/2; i += 3, j -= 3) {
                cout << i << " " << j << nl;
            }
        }
        else {
            for (int i = 2, j = 3*n; i <= (3*n + 1)/2; i += 3, j -= 3) {
                cout << i << " " << j << nl;
            }
        }
    }
}