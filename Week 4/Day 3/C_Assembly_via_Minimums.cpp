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
        ll n;
        cin >> n;
        ll bsize = (n*(n-1))/2;
        vector < ll > v(bsize);
        for (int i = 0; i < bsize; i++) {
            cin >> v[i];
        }
        sort (v.begin(), v.end());
        vector < ll > a;
        int val;
        int m = n;
        for (int i = 0; i < bsize; i += m) {
            cout << v[i] << " ";
            a.push_back(v[i]);
            m--;
            val = v[i];
        }
        for (int i = a.size(); i < n; i++) {
            cout << val << " ";
        }
        cout << nl;
    }
}