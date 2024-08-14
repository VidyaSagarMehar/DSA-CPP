#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a nubmer :";
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "The number is even";
    }
    else
    {
        cout << "Number is odd";
    }
}