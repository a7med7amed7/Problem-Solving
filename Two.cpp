#include <iostream>
using namespace std;
#include <string>

bool isContainDigit(string p)
{
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == '0' || p[i] == '1' || p[i] == '2' || p[i] == '3' || p[i] == '4' || p[i] == '5' || p[i] == '6' || p[i] == '7' || p[i] == '8' || p[i] == '9')
        {
            return true;
        };
    }
    return false;
}

bool isContainUpper(string p)
{
    for (int i = 0; i < p.size(); i++)
    {
        if (isupper(p[i]))
        {
            return true;
        }
    }
    return false;
}

bool isContainLower(string p)
{
    for (int i = 0; i < p.size(); i++)
    {
        if (islower(p[i]))
        {
            return true;
        }
    }
    return false;
};

int isValid(string p)
{
    static int r = 0;
    if (!isContainDigit(p))
    {
        p += '3';
        r += 1;
    };
    if (!isContainLower(p))
    {
        p += 'z';
        r += 1;
    };
    if (!isContainUpper(p))
    {
        p += 'Z';
        r += 1;
    };
    if (p.size() < 6)
    {
        int s = 6 - p.size();
        for (int j = 0; j < s; j++)
        {
            p += p[j];
            r += 1;
        }
    }

    return r;
}

int main()
{
    string p;
    cin >> p;

    cout << isValid(p) << endl;
}