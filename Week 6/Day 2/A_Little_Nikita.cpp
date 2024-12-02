//Problem_Name: Little Nikita
//Problem_Link: https://codeforces.com/problemset/problem/1977/A

//^-^-^-^-^-^-^-^-^-^-^||
//________YEASIN_______||
//___HASAN______EMAL___||
//^-^-^-^-^-^-^-^-^-^-^||
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
        ll n, m;
        cin >> n >> m;
        if (n < m) no;
        else if ((n-m)%2 == 0) yes;
        else no;
    }
}