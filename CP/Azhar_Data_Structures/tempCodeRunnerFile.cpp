#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
int c;
void print(priority_queue<int> &pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
        c--;
    }
}

void solve()
{
    int n, x;
    cin >> n;
    priority_queue<int> pq;
    // bool a[n + 1] = {0};
    c = n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pq.push(x);
        if (x == c)
        {
            print(pq);
        }
        cout << "\n";
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
