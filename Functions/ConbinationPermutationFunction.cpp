#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}
int permutation(int n, int r)
{
    int npr = fact(n) / (fact(n - r));
    return npr;
}

int main()
{
    int n, r;
    cout << "Enter the n : ";
    cin >> n;
    cout << "Enter the r : ";
    cin >> r;
    int ncr = combination(n, r);
    int npr = permutation(n, r);
    cout << "combination : " << ncr << endl
         << "Permutation : " << npr;
}