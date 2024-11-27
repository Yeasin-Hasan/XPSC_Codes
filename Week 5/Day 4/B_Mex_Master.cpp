//Problem_Link: https://codeforces.com/problemset/problem/1806/B

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
        int cnt0 = 0, cntx, cntn1 = 0, cntnx = 0;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) cnt0++;
            if (a[i] == 1) cntn1++;
            if (a[i] != 1 && a[i] != 0) cntnx++;
        }
        cntx = cntn1 + cntnx;
        if (cntx == 0) cout << "1\n";
        else if (cnt0 == 0) cout << "0\n";
        else if (cntx >= cnt0 - 1) cout << "0\n";
        else if (cntx < cnt0 - 1) {
            if (cntnx > 0) cout << "1\n";
            else cout << "2\n";
        }
    }
}