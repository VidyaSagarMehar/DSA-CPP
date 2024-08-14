// if the cost and the selling price of an item is input through the keyboad, write a program to
//  determine whether the seller has made profit or incurred loss. Also determine how much
// profit he made or loss incurred.

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Cost Price : ";
    int cp;
    cin >> cp;

    cout << "Enter the Selling Price : ";
    int sp;
    cin >> sp;

    if (sp > cp)
    {
        cout << "Profit " << sp - cp << "Rs.";
    }
    if (cp > sp)
    {
        cout << "Loss " << cp - sp << "Rs.";
    }
    if (sp == cp)
    {
        cout << "No profit no loss";
    }
}