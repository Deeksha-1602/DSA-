#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 0, b = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive number of terms.";
        return 0;
    }

    cout << "Fibonacci series: ";

    for (int i = 0; i < n; i++)
    {
        cout << a << " ";

        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
