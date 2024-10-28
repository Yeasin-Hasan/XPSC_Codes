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
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i <= s; i++) {
        for (int j = 0; i + j <= s; j++) {
            for (int k = 0; i + j + k <= s; k++) {
                if (i*j*k <= t) cnt++;
            }
        }
    }
    cout << cnt;
}