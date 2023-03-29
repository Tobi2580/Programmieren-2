//
// Created by hiero on 28.03.2023.
//
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <limits>

using namespace std;

int main() {

    long ld = numeric_limits<double>::min(); // kleinster Wert
    long le = numeric_limits<double>::max(); // größter Wert

    cout << ld << '\n' << le << '\n';

    return 0;
}