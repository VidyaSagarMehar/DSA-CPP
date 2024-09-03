#include <iostream>
using namespace std;

void gcd(int a, int b)
{
    int hcf = 1;
    for (int i = min(a, b); i >= 1; i--)
    {
        hcf = i;
        break;
    }
    cout << hcf;
}
int main()
{
    int a, b;
    cout << "Enter the 1st no. : ";
    cin >> a;
    cout << "Enter the 2nd no. : ";
    cin >> b;
    gcd(a, b);
}