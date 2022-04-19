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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    v.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= v[v.size() - 1])
        {
            v.push_back(arr[i]);
        }
        else
        {
            int l = 0, r = v.size() - 1, mid, t;
            while (l <= r)
            {
                mid = (l + r) >> 1;
                if (v[mid] > arr[i])
                {
                    r = mid - 1;
                    t = mid;
                }
                else
                {
                    l = mid + 1;
                }
            }
            v[t] = arr[i];
        }
    }
    cout << v.size() << " ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
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
        solve();
}
