#include <iostream>
using namespace std;

int main()
{
    int num, term = 0, j = 1, x;
    cout << "Enter the number of terms: ";
    cin >> num;
    cout << "Fibonacci series: {";
    cout << term << ", " << j << ", ";
    for (int i = 3; i <= num; i++)
    {
        x = term + j;
        term = j;
        j = x;
        cout << x << ", ";
    }
    cout << "}" << endl;
    return 0;
}