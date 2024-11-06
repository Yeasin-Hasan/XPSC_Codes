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
        priority_queue < int > pq;
        map <int, int> m;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            m[a]++;
        }
        for (auto val : m) {
            pq.push(val.second);
        }
        while (!pq.empty()) {
            if (pq.size() < 2) {
                break;
            }
            int a,b;
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            --a;
            --b;
            if (a > 0) pq.push(a);
            if (b > 0) pq.push(b);
        }
        int ans = 0; 
        while (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << nl;
    }
}