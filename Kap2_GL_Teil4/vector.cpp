//
// Created by hiero on 14.04.2023.
//
#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v; // startsize is 0
    int val {0};
    cout << "Insert values!\n\n";
    do {
        cout << "Value (0 = End of input): ";
        cin >> val;
        if (val != 0) {
            v.push_back(val); // appends value
        } // to vector
    }
    while (val != 0);
    cout << "\nValues entered:\n";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << i + 1 << ". value: " << v[i] << '\n';
    }
    cout << "\nv.size() = " << v.size() << '\n';
    cout << "v.capacity() = " << v.capacity() << endl;
}