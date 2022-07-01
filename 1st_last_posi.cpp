#include <iostream>
using namespace std;
string First_last_position(int arr[], int size, int key)
{
    int i = 0;
    int j = size - 1;
    while (arr[i] != key)
    {
        i++;
    }
    while (arr[j] != key)
    {
        j--;
    }
    return "i,j";
}
int main()
{
    int arr[8] = {0, 0, 1, 1, 1, 2, 2, 2};
    // int ans = First_last_position(arr, 8, 2);
    // int ans2 = First_last_position(arr, 8, 2);
    // cout << ans << endl;
    return 0;
}
