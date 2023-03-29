#include <stdio.h>
#include <cstdlib>
using namespace std;

int main()
{
    int *p = (int*) malloc(sizeof(int));
    *p = 7;

    int *p1 = new int(7);
    delete p1;

    int * pArr = new int[10];
    delete[] pArr;


    return 0;
}