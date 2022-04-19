#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

bool check(string s, string t, int x, int mid, int arr[], int n)
{
    string temp = s;
    for (int i = 0; i < mid; i++)
    {
        temp[arr[i] - 1] = '*';
    }

    int p1 = 0, p2 = 0;
    // cout << mid << " " << temp << "\n";
    while (p2 < n)
    {

        if (temp[p2] == t[p1])
            p1++;
        if (p1 == x)
            return 1;

        p2++;
    }
    return 0;
}

void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), x = t.size();
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0, l = 0, r = n;
    while (l <= r)
    {
        int mid = (r + l) >> 1;

        if (check(s, t, x, mid, arr, n))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}