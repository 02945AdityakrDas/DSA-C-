#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter number of rows : ";
    cin >> n;
    int i, j;
    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}