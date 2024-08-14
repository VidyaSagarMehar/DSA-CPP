#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter a Number : ";
    cin >> n;
    int sum = 0;
    // for (i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //         sum += i;
    //     else
    //         sum -= i;
    // }
    // cout << sum;

    // or

    if (n % 2 == 0)
        sum = -n / 2;
    else
        sum = -n / 2 + n;
    cout << sum;
}