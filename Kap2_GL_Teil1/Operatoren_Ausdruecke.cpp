#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 7, c;
    c = (a not_eq b) or (a xor_eq  (5 and 6));
    cout << "c = " << c << ", a = " << a << endl;


    int d = 5, e = 7, f;
    f = (d not_eq (5 and 6)) or (d not_eq e);
    cout << "f = " << f << ", d = " << d << endl;
    return 0;
}
