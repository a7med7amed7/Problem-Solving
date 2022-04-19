#include <iostream>
using namespace std;
#include <vector>
void makeSequance(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v.emplace_back(v[i]);
    }
}

int main()
{
    int y = 5;
    int x = 5 * y++;
    cout << x;
}