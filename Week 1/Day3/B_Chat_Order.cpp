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
    stack < string > st;
    map < string, int > m;
    while (n--) {
        string s1;
        cin >> s1;
        st.push(s1);
    }
    for (int i = 0; !st.empty(); i++) {
        if (m[st.top()] == 0) {
            cout << st.top() << "\n";
            m[st.top()]++;
        }
        st.pop();
    }
}