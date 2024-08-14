#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    // for (int i = 1; i <= 2 * n - 1; i += 2)
    // {
    //     cout << i << endl;
    // }

    // or
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a + 2;
    }
}