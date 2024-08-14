#include <iostream>
using namespace std;
int main()
{
    // 100, 97, 94 .......
    int a = 100;
    for (int i = 1; a > 0; i++)
    {
        cout << a << endl;
        a = a - 3;
    }
}