#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
int ugly(int n, int d)
{
    int i = 1;
    int x = d;
    while (n % d == 0)
    {
        i += 1;
        d = pow(x, i);
    }
    return i - 1;
};

int getNum(int n)
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int inc = 0, s = 7;
    if (n < 7)
    {
        return n;
    }
    else
    {
        while (v.size() != (n - inc))
        {

            if (s % 2 == 0)
            {
                v.emplace_back(s);
                n += 1;
                inc += 1;
            }
            else if (s % 3 == 0)
            {
                v.emplace_back(s);
                n += 1;
                inc += 1;
            }
            else if (s % 5 == 0)
            {
                v.emplace_back(s);
                n += 1;
                inc += 1;
            }
            s += 1;
        }
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << endl;
        // }
    }

    return v[v.size() - 1];
}

int main()
{
    int n;
    cin >> n;

    cout << getNum(n);
}