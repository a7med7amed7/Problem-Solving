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
    int arr[n], pos[n + 1];
    bool visited[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pos[arr[i]] = i;
    }
    int mx = pos[n], lts = n;
    for (int i = n; i > 0; i--)
    {
        if (pos[i] > mx)
            continue;
        mx = pos[i];
        for (int j = mx; j < lts; j++)
        {
            cout << arr[j] << " ";
        }
        lts = mx;
    }

    cout << "\n";
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