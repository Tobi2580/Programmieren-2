#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    double dval;
    int nVal;

    dval = 2.4 + static_cast<double>(nVal + 2);

    cout << "dval = " << dval << endl;

    double arrD[10];
    double * pd1 {arrD}, *pd2{arrD};
    pd2++;
    cout << pd2 -pd1 << endl; //ergibt immer Anzahl der Elemte zwischen Zeigern, die auf das gleiche Array zeigen
    cout << reinterpret_cast<long&>(pd2) - reinterpret_cast<long&>(pd1) << endl; //Differenz der beiden longs -> 8

    return 0;
}
