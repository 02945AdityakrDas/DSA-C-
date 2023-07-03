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
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "2";
            }
        }
        cout << endl;
    }
    return 0;
}