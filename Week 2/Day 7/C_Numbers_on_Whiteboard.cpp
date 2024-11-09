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
        vector < int > v(n+1);
        for (int i = 1; i < n; i++) {
            v[i] = i;
        }
        cout << "2" << nl;
        if (n == 2) cout << "1 2\n";
        else {
            cout << n-2 << " " << n << nl;
            cout << n-1 << " " << n-1 << nl;
            n--; 
            while (n != 2) {
                cout << n << " " << n-2 << nl;
                n--;
            }
        }
    }
}