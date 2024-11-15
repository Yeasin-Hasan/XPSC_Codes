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
        vector < int > v[n];
        vector < int > h (n+1); 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-1; j++) {
                int a;
                cin >> a;
                v[i].push_back(a);
            }
            h[v[i][0]]++;
        }
        
        int mx = 0, ind;
        for (int i = 0; i <= n; i++) {
            if (h[i] > mx) {
                mx = h[i];
                ind = i;
            }
        }
        cout << ind << " ";
        for (int i = 0; i < n; i++) {
            if (v[i][0] != ind) {
                for (int j = 0; j < n-1; j++) {
                    cout << v[i][j] << " ";
                }
                cout << nl;
                break;
            }
        }
    }
}