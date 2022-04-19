#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
vector<string> v;
void print(string s, string temp, int n)
{
    if (temp == string(n, '0'))
        return;
    string x = "";
    for (int i = 0; i < n; i++)
    {
        if (temp[i] == '1')
            x += s[i];
    }
    v.push_back(x);
}

void generate(int i, int n, string s, string temp = "")
{
    if (i == n)
    {
        print(s, temp, n);
        return;
    }
    generate(i + 1, n, s, temp + '0');
    generate(i + 1, n, s, temp + '1');
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    generate(0, n, s);
    sort(all(v));
    for (auto x : v)
    {
        cout << x << "\n";
    }
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
