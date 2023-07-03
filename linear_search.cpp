#include <iostream>
using namespace std;
bool lsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[9] = {2, 5, 6, 7, 8, 9, 4, 11, 222};
    cout << "Enter a number : " << endl;
    int key;
    cin >> key;
    bool result = lsearch(arr, 9, key);
    if (result)
    {
        cout << "Number is present" << endl;
    }
    else
    {
        cout << "Number is absent" << endl;
    }

    return 0;
}