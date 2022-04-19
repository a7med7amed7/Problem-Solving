#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

int findMEX(int num)
{
    bool temp[103] = {0};
    if (num > 102)
    {
        return 0;
    }
    temp[num] = 1;
    for (int i = 0; i < 103; i++)
    {
        if (temp[i] == 0)
        {
            return i;
        }
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (is_sorted(all(arr)))
    {
        cout << n << "\n";
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
