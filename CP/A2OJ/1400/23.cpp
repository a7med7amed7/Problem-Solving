#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int zero = 0, five = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            zero += 1;
        else
            five++;
    }
    five = five - (five % 9);
    if (!zero)
    {
        cout << -1;
    }
    else if (!five)
    {
        cout << 0;
    }
    else
    {
        cout << string(five, '5') << string(zero, '0');
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)

    solve();
}