//Problem_Link: https://codeforces.com/problemset/problem/1783/B

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
        vector < int > v(n*n);
        int flag1 = n*n, flag2 = 1;
        for (int i = 0; i < n*n; i++) {
            if (i%2 == 0) v[i] = flag1--;
            else v[i] = flag2++;
        }
        reverse(v.begin(), v.end());
        int a[n][n];
        for (int i = 0; i < n; i++) {
            if (i%2 == 0) {
                for (int j = 0; j < n; j++) {
                    a[i][j] = v.back();
                    v.pop_back();
                }
            }
            else {
                for (int j = n-1; j >= 0; j--) {
                    a[i][j] = v.back();
                    v.pop_back();
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << nl;
        }
    }
}