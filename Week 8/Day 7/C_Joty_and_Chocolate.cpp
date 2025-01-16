//Problem_Name: 
//Problem_Link: 

//^-^-^-^-^-^-^-^-^-^-^||
//________YEASIN_______||
//___HASAN______EMAL___||
//^-^-^-^-^-^-^-^-^-^-^||
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll lcm (ll a, ll b) {
    return (a*b)/__gcd(a,b);
}
int main()
{
    fast;
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    
    ll ans;
    ll common = n/lcm(a,b);
    ll red = n/a, blue = n/b;

    if (p >= q) ans = red*p + (blue - common)*q;
    else ans = (red - common)*p + blue*q;
    cout << ans << nl;
    
}