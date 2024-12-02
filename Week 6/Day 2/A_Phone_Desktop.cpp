//Problem_Name: Phone Desktop
//Problem_Link: https://codeforces.com/problemset/problem/1974/A

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
int main() {
    int t;
    cin >> t;
    while (t--){
        int x, y, ans;
        cin >> x >> y;
        int s2 = ceil ((float)y/2);
        int tot = x + (y*4);
        if (s2*15 >= tot) ans = s2;
        else ans = ceil((float)tot/15);
        cout << ans << "\n";
    }
}