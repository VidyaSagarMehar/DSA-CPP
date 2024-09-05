#include <iostream>
using namespace std;
int main()
{
    // int x = 4;
    // int y = 5;
    // int *p = &x;
    // int *p2 = &y;
    // cout << *p + *p2;

    int x, y;
    int *p1 = &x;
    int *p2 = &y;
    cout << "Enter 1st no. : ";
    cin >> *p1;
    cout << "Enter 2nd no. : ";
    cin >> *p2;
    cout << x + y << endl;
    cout << *p1 + *p2;
}