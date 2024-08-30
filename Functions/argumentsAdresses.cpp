#include <iostream>
using namespace std;

void func(int x, int y)
{
    cout << "Address of function param x : " << &x << endl;
    cout << "Address of function param y : " << &y << endl;
}

int main()
{
    int x = 5;
    int y = 6;
    cout << "Adress of main x : " << &x << endl;
    cout << "Adress of main y : " << &y << endl;
    func(x, y);
}