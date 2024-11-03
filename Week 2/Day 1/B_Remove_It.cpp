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
    int n, x;
    cin >> n >> x;
    vector <int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a != x) v.push_back(a);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}