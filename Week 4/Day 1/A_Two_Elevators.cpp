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
        int a, b, c;
        cin >> a >> b >> c;
        int first = a-1, second;
        second = (max(b,c) - min(b,c)) + (c-1);
        if (first < second) cout << "1\n";
        else if (first == second) cout << "3\n";
        else cout << "2\n";
    }
}