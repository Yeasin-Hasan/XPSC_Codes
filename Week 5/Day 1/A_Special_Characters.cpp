//Problem_Link: https://codeforces.com/problemset/problem/1948/A

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
        
        if (n%2 == 1) no;
        else {
            yes;
            for (int i = 0; i < n/2; i++) {
                if (i%2 == 0) cout << "AA";
                else cout << "BB";
            }
            cout << nl;
        }
        
    }
}