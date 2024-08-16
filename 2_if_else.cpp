#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number N : ";
    cin >> n;

    if (n > 0)
    {
        cout << "this number is positive" << endl;
    }
    else if (n == 0)
    {
        cout << "this number is zero" << endl;
    }
    else
    {
        cout << "this number is negative" << endl;
    }
}