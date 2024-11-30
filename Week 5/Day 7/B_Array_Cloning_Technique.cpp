//Problem_Name: Array Cloning Technique
//Problem_Link: https://codeforces.com/problemset/problem/1665/B

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
        int a[n];
        map < int, int > m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        int mx = INT_MIN;
        for (auto val : m) {
            if (val.second > mx) mx = val.second;
        }
        int flag = n - mx;
        int cnt = 0;
        for (int i = flag; i > 0;) {
            if (mx <= i) {
                i -= mx;
                cnt += mx + 1;
                mx *= 2;
            }
            else {
                cnt += i+1;
                i = 0;
                break;
            }
        }
        cout << cnt << nl;
    }
}