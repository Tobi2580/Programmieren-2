//
// Created by hiero on 28.03.2023.
//
#include <stdio.h>
#include <cstdlib>
#include <iostream>
using std::cout;
struct Point{
    char c;
    char * pC;
};
int main()
{
    char c1('A');
    char * pC1(&c1);

    struct Mix m1(c1, pC1);

    auto & [c2, pC2](m1);
    c2++;

    cout << "c2= " << c2 << '\n';
    return 0;
}
