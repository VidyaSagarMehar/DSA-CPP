#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a character : ";
    char ch;
    cin >> ch;
    int ascii = (int)ch;
    // ascii value of A to Z is 65 to 90
    // ascii value of a to z is 97 to 122
    if (ascii >= 65 && ascii <= 90)
    {
        cout << "The character is Uppercase alphabet";
    }
    if (ascii >= 97 && ascii <= 122)
    {
        cout << "The character is Lowercase alphabet";
    }
}