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
    int n;
    cin >> n;
    set < pair <string,string>> m;
    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;
        m.insert({s1,s2});
    }
    int cnt = 0; 
    for (auto val : m) {
        cnt++;
    }
    cout << cnt;
}