#include <iostream>

template<typename T> void print(T printVal){
    printf("Zahl: %ld\n",
}

template<typename T> void print(double printVal){
    printf("Zahl: %f\n",
}

int main(){

    int a = 5, int b = 6;
    double c = 1.5, double d = 2.5;
    long e = 123;

    print(a);
    print(c

    return 0;
}