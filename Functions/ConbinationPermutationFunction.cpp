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
int main()
{
    int n, r;
    cout << "Enter the n : ";
    cin >> n;
    cout << "Enter the r : ";
    cin >> r;
    int nFact = fact(n);
    int rFact = fact(r);
    int nrFact = fact(n - r);
    int ncr = nFact / (rFact * nrFact);
    cout << ncr;
}