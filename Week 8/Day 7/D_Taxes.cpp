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

bool Prime(ll a) {
    for (ll i = 2; i <= sqrt(a); i++) {
        if (a%i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    fast;
    
    ll n;
    cin >> n;
    ll ans;

    if (n%2 == 0) {
        if (n > 2) ans = 2;
        else ans = 1;
    }
    else {
        if (!Prime(n)) {
            if (Prime(n-2)) ans = 2;
            else ans = 3;
        }
        else ans = 1;
    }
    cout << ans << nl;
    
}