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
        int n, s;
        cin >> n >> s;
        vector < int > v(n), h(n+1);
        for (int i = 0; i < n; i++) cin >> v[i];
        h[0] = 0;
        for (int i = 1; i < n+1; i++) h[i] = h[i-1] + v[i-1];

        int mn_opp = INT_MAX;
        if (h[n] < s) cout << "-1\n";
        else {
            for (int i = 1; i < n+1; i++) {
                int current_sum = h[i-1] + s;

                if (current_sum > h[n]) continue;

                else {
                    auto max_ind = upper_bound(h.begin(),h.end(),current_sum);
                    max_ind--;
                    int dist = max_ind - h.begin();
                    int opp = n-(dist-i+1);
                    mn_opp = min (mn_opp, opp);
                }
            }
            cout << mn_opp << nl;
        }
    }
}