#include <iostream>
using namespace std;
void reverse_array(int arr[], int n)
{
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        int swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
    }
    cout << "Reverse array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4};
    reverse_array(arr, 4);
    return 0;
}