#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a positive number: ";
    cin >> n;

    if (n < 0)
        cout << "Negative Numbers can't have factorials.";
    else
    {
        for(int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial = " << factorial;
    }

    return 0;
}
