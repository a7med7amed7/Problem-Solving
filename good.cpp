#include <iostream>
using namespace std;
#include <string>
int checkIfGood(string s, char k)
{
    int r = 0;
    int ascii = (int)k;
    for (int i = 0; i < s.size(); i++)
    {
        if ((int)s[i] >= ascii)
        {
            r += 1;
        }
    }
    return r;
};

int main()
{
    int n;
    char k;
    cin >> n >> k;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        string e;
        cin >> e;
        if (!checkIfGood(e, k))
        {
            r += 1;
        }
    }
    cout << r;
}