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
    int k = n - 1, temp = n;
    cout << 2 << "\n";
    for (int i = 0; i < n - 1; i++)
    {
        cout << k << " " << temp << "\n";
        int s = k + temp;
        temp = (s / 2) + (s & 1);
        k--;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}