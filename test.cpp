#include <stdio.h>


int main() {
    char operator1 = 'A';
    short operator2 = 0454;
    int operator3 = 0x12345678;

    /********************************************
     'A' = 0100 0001; 0454(oct) = 0001 0010 1100
      0000 0100 0001
    - 0001 0010 1100
    ----------------
      1111 0001 0101 = -235 -> short
    ********************************************/

    short zwischenergebnis = operator1 - operator2;
    int result = zwischenergebnis + operator3;
    result = static_cast<long>(result);
    printf("'A' - 0454 + 0x12345678 = %d", result);

    return 0;
}

