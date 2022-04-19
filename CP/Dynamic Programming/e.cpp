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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v;
    v.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > v[v.size() - 1])
        {
            v.push_back(arr[i]);
        }
        else
        {
            auto it = lower_bound(all(v), arr[i]);
            v[it - v.begin()] = arr[i];
        }
    }
    cout << v.size();
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