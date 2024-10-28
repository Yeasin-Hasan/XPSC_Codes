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
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 0, num;
    for (int i = 1; i*c <= b; i++) {
        if (i*c >= a && i*c <= b) {
            flag = 1;
            num = i*c;
            break;
        }
    }
    if (flag) cout << num;
    else cout << "-1";
}