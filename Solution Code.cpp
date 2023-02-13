#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define int long long int
#define pb push_back
#define endl '\n'
int mod = 1e9 + 7;
const int N = 1e16 + 9;

void solve()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while (a != b)
    {
        cnt++;
        if (a > b)
        {
            a /= 2;
        }
        else
        {
            b /= 2;
        }
    }
    cout << cnt << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
