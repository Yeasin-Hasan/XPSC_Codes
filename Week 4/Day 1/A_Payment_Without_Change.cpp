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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int req_a = s/n;
        if (req_a <= a) {
            if (s - req_a*n <= b) yes;
            else no;
        }
        else if (s - a*n <= b) yes;
        else no;
    }
}