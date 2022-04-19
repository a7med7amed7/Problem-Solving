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
    string s;
    cin >> s;
    int arr[3] = {0};
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'r')
            arr[0]++;
        if (s[i] == 'g')
            arr[1]++;
        if (s[i] == 'b')
            arr[2]++;

        if (s[i] == 'R')
            if (arr[0])
                arr[0]--;
            else
            {
                cout << "NO\n";
                return;
            }
        if (s[i] == 'G')
            if (arr[1])
                arr[1]--;
            else
            {
                cout << "NO\n";
                return;
            }
        if (s[i] == 'B')
            if (arr[2])
                arr[2]--;
            else
            {
                cout << "NO\n";
                return;
            }
    }

    cout << "YES\n";
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
