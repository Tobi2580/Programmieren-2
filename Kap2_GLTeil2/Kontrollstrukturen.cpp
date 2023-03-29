//
// Created by hiero on 28.03.2023.
//
#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    int a[] = {3, 4, 5, 6, 7};
    int *p = a; //&a[0]

    for(int i = 0; i < 5; i++) {
        cout << p[i] << ' ';
    }
    cout << endl;

    return 0;
}
