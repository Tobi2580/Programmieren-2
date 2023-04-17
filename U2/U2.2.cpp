//
// Created by hiero on 31.03.2023.
//
#include <iostream>

using namespace std;

int main() {

    double d {9.876};

    cout.precision(3);
    cout << d << '\n';

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(6);
    cout << d << '\n';

    cout.precision(0);
    cout << d << '\n';
    return 0;
}
