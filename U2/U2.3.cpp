//
// Created by hiero on 31.03.2023.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << setfill('*');

    cout.setf(ios::left, ios::adjustfield);
    cout << setw(2) << "data type";
    cout.setf(ios::right, ios::adjustfield);
    cout << setw(2);
    cout.setf(ios::left, ios::adjustfield);
    cout << setw(3) << "|";

    cout.setf(ios::left, ios::adjustfield);
    cout << setw(11) << "min value" << "|" << "\n";

    //second line

    cout.setf(ios::internal, ios::adjustfield);
    cout << setfill('-') << setw(24) << '\n';

    return 0;
}
