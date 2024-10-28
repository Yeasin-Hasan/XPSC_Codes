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
    int n;
    cin >> n;
    long long int a[n];
    vector <long long int> v;
    long long int sum1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i]%2 == 1) v.push_back(a[i]);
        sum1 += a[i];
    }   
    if (sum1%2 == 0) cout << sum1;
    else {
        sort(v.begin(), v.end());
        sum1 -= v[0];
        cout << sum1;
    }
}
