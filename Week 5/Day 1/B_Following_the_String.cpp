//Problem_Link: https://codeforces.com/problemset/problem/1927/B

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

bool cmp (pair <int, char> p, pair <int, char> q) {
    if (p.first > p.second) return false;
}

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
        for (int i = 0; i < n; i++) cin >> a[i];
        vector < int > v (27);
        char ch = 'a';
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < 27; j++) {
                if (a[i] == v[j]){
                    char s = 'a' + j -1;
                    cout << s;
                    v[j]++;
                    break;
                }
            }
        }
        cout << nl;
    }
}