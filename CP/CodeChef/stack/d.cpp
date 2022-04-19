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
    vector<int> arr(1e5 + 5);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stack<int> st;
    int cut = 0, mn = 1e7;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, arr[i]);
        if (st.empty())
        {
            st.push(arr[i]);
            mn = arr[i];
            cut = max(cut, arr[i]);
            continue;
        }
        if (arr[i] >= mn * (int)(st.size() + 1))
        {
            mn = arr[i];
            cut = max(cut, arr[i]);
            st = {};
            st.push(arr[i]);
        }
        else
        {
            st.push(arr[i]);
            cut = max(cut, mn * (int)st.size());
        }
    }
    cout << cut << "\n";
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