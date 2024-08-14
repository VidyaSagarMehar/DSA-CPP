// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter Base : ";
//     cin >> a;
//     cout << "Enter Exponent : ";
//     cin >> b;
//     bool flag = true;
//     if (b < 0)
//     {
//         flag = false;
//         b = -b;
//     }
//     float power = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         power = power * a;
//         b = -b;
//     }
//     if (flag == false)
//     {
//         power = 1 / power;
//     }
//     cout << a << " raised to the power " << b << " is " << power;
// }

#include <iostream>
using namespace std;

int main()
{
    int a, b, original_b;
    cout << "Enter Base : ";
    cin >> a;
    cout << "Enter Exponent : ";
    cin >> b;

    original_b = b; // Store the original value of b for output

    bool flag = true;
    if (b < 0)
    {
        flag = false;
        b = -b;
    }

    float power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }

    if (flag == false)
    {
        power = 1 / power;
    }

    cout << a << " raised to the power " << original_b << " is " << power;

    return 0;
}
