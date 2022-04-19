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
    stack<int> s;
    int mn = INT_MAX, c = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty())
        {
            if (arr[i] <= s.top())
                s.pop();
            else
            {
                c++;
                break;
            }
        }

        s.push(arr[i]);
    }
    cout << c << "\n";
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