#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter the no. to print stars on triangle patteren : ";
    cin >> n;
    // no of stars = n + 1 - i
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1 - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}