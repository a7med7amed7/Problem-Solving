#include <iostream>
using namespace std;
#include <vector>
#include <string>

int getIndex(int arr[], int l, int e)
{
    for (int i = 0; i < l; i++)
    {
        if (arr[i] == e)
        {
            return i;
        };
    }
    return 0;
};

int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << getIndex(arr, 4, 3);
}