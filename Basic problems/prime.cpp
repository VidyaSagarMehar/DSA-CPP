#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a no : ";
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {

            flag = false;
            // cout<<n<<" is a composite";
            break;
        }
    }
    if (n == 1)
        cout << n << " is neither a prime nor a composite";
    else if (flag == true)
        cout << n << " is a prime no.";
    else
        cout << n << " is a composite";
}
