#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "No. of row : ";
    cin >> n;
    cout << "No. of column : ";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}