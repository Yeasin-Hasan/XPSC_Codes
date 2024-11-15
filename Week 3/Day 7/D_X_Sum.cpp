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
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int mx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int indi, indj;
                int ind_sum = a[i][j];
                for (indi = i+1, indj = j+1; indi >= 0 &&  indi < n && indj >= 0 && indj < m; indi++, indj++) ind_sum += a[indi][indj];
                for (indi = i-1, indj = j-1; indi >= 0 &&  indi < n && indj >= 0 && indj < m; indi--, indj--) ind_sum += a[indi][indj];
                for (indi = i+1, indj = j-1; indi >= 0 &&  indi < n && indj >= 0 && indj < m; indi++, indj--) ind_sum += a[indi][indj];
                for (indi = i-1, indj = j+1; indi >= 0 &&  indi < n && indj >= 0 && indj < m; indi--, indj++) ind_sum += a[indi][indj];
                if (ind_sum >= mx) mx = ind_sum;
            }
        }
        cout << mx << nl;
    }
}