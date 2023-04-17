//
// Created by hiero on 14.04.2023.
//
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main()
{
    // C-array
    int arr1[2][3] = {{ 1, 2, 3 },
                      { 4, 5, 6}};
// overwrite element
    arr1[1][1] = 99;
    for (const auto & row : arr1){
        for (const auto & element : row)
            cout << setw(2) << element << " ";
        cout << '\n';
    }
    cout << '\n';
// C++ std::array
    array<array<int, 3>, 2> arr2{7,8,9,10,11,12};
    // like in C-arrays
    arr2[0][1] = 99;
    // secure access
    arr2.at(1).at(1) = 99;
    // possible like above, but this works as well
    for (const array<int, 3> & row : arr2){
        for (const int & elem : row)
            cout << setw(2) << elem << " ";
        cout << '\n';
    }
    return 0;
}
