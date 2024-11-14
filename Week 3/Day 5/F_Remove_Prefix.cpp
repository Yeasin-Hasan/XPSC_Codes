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
        vector < int > v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        if (n == 1) {
            cout << "0\n";
            continue;
        }
        set <int> s;
        vector <int> h(n);
        for (int i = n-1; i >= 0; i--) {
            s.insert(v[i]);
            h[i] = s.size();
        }
        int ind;
        int flag = 0;
        for (int i = n-2; i >= 0; i--) {
            if (h[i]==h[i+1]) {
                ind = i;
                flag = 1;
                break;
            }
        }
        if (flag) cout << ind+1 << nl;
        else cout << "0\n";
    }
}