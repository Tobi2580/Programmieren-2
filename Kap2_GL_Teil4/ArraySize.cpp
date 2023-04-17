//
// Created by hiero on 14.04.2023.
//
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
    // C array
    int arr1[3] {1, 2, 3};
    arr1[1] = 15; // overwrites element
    std::cout << "size: " << (sizeof(arr1) / sizeof(arr1[0])) << '\n';
    for (int elem : arr1){
        std::cout << elem << '\n';
    }
    // C++ std::array
    std::array<int, 3> arr2 {4, 5, 6}; // same as in next line
    // std::array arr2{4, 5, 6}; // possible since c++17
    arr2.at(1) = 25; // overwrites element (or like in C-Array)
    std::cout << "size: " << arr2.size() << '\n';
    for (int element : arr2){
        std::cout << element << '\n';
    }

    return 0;
}