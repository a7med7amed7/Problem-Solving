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
    int n, c = 1;
    cin >> n;
    string s;
    cin >> s;
    stack<int> zero, one;
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (one.empty())
            {
                zero.push(c);
                ans[i] = c;
                c++;
            }
            else
            {
                int temp = one.top();
                one.pop();
                ans[i] = temp;
                zero.push(temp);
            }
        }
        else
        {
            if (zero.empty())
            {
                one.push(c);
                ans[i] = c;
                c++;
            }
            else
            {
                int temp = zero.top();
                zero.pop();
                ans[i] = temp;
                one.push(temp);
            }
        }
    }

    cout << c - 1 << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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