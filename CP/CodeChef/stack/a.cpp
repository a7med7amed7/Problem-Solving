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
    int n, x;
    cin >> n;
    queue<int> arrive, book;
    stack<int> missed;
    vector<bool> a(n + 3, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arrive.push(x);
        book.push(i + 1);
    }
    while (!arrive.empty() || !book.empty())
    {
        if (!arrive.empty() && !book.empty() && arrive.front() == book.front())
        {
            cout << arrive.front() << " ";
            arrive.pop(), book.pop();
        }
        else if (!book.empty() && book.front() < arrive.front())
        {
            missed.push(book.front());
            book.pop();
        }
        else if (book.empty() || arrive.front() < book.front())
        {
            a[arrive.front()] = 1;
            if (arrive.front() == missed.top())
                while (!missed.empty() && a[missed.top()])
                {
                    cout << missed.top() << " ";
                    missed.pop();
                }
            arrive.pop();
        }
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
