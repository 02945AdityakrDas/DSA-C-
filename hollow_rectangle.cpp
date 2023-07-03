#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter number of rows and coloumns: ";
    cin >> n >> m;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || j == 1 || i == n || j == m)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}