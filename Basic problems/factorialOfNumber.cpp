#include <iostream>
using namespace std;
int main()
{
    int n, f = 1;
    cout << "Enter a number to calculate its factorial : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << f;
}