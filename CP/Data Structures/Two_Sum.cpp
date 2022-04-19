#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

class Solution
{
private:
    set<vector<int>> s;
    void add(int l, int r)
    {
        vector<int> temp;
        for (int i = l; i <= r; i++)
        {
            temp.push_back(v[i]);
        }
        s.insert(temp);
    }
    void check(int mid, vector<int> v)
    {
        int sum = 0;
        for (int i = 0; i < mid; i++)
        {
            sum += v[i];
        }
        int l = 0, r = mid - 1;
        if (sum == 0)
            add(0, mid);
        while (r < v.size())
        {
            sum -= v[l++];
            r++;
            sum += v[r];
            if (sum == 0)
            {
                add(l, r);
            }
        }
    }

public:
    set<vector<int>> getAllZeroSumSubarrays(vector<int> const &nums)
    {

        int l = 1;
        while (l < nums.size())
        {
            check(l, nums);
            l++;
        }
        return s;
    }
};

void solve()
{
    multimap<int, int> mp;
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
    // {
    //     solve();
    // }
}
