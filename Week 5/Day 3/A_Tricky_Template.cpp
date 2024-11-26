//Problem_Link: https://codeforces.com/problemset/problem/1922/A

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
        cin >> n ;
        string a, b, c;
        cin >> a >> b >> c;
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != c[i] && b[i] != c[i]) {
                flag = 1;
                break;
            }
        }
        if (flag) yes;
        else no;
    }
}