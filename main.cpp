#include <iostream>


using namespace std;

int main()
{
    int sum, a, b;
    // Read summands
    cout << "Enter two whole numbers: ";
    cin >> a >> b;
    // Calculate sum
    sum = a + b;
    // Show result on screen
    cout << a << " + " << b << " = " << sum << '\n';
    return 0;
}