#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;

    cout << "Enter position: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative position.";
    }
    else
    {
        cout << "Fibonacci value at position "
             << n << " is " << fib(n);
    }

    return 0;
}
