#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter the no. ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j += 2)
        {
            cout << j;
        }
        cout << endl;
    }
}