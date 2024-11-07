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
    int n; 
    cin >> n;
    set < pair<int,int> > s;
    multiset < pair<int, int> > m;
    vector <int> v;
    int customer = 1;
    while (n--) {
        int type;
        cin >> type;
        if (type == 1) {
            int money;
            cin >> money;
            s.insert ({customer, money});
            m.insert ({money, -customer});
            customer++;
        }
        else if (type == 2) {
            int pos = s.begin()->first, money = s.begin()->second;
            v.push_back(pos);
            s.erase(s.begin());
            m.erase({money, -pos});
        }
        else {
            int pos = -m.rbegin()->second, money = m.rbegin()->first;
            v.push_back(pos);
            m.erase (--m.end());
            s.erase({pos, money});
        }
    }
    for (auto val: v) {
        cout << val << " ";
    }
}