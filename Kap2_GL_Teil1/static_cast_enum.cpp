//
// Created by hiero on 24.03.2023.
//
#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

// plain enum (C and C++)
enum Color {red, green, blue};
enum Card {red_card, green_card, yellow_card};
// enum class (C++)
enum class Animal {dog, deer, cat, bird, human};
enum class Mammal {kangaroo, deer, human};

#include <iostream>

int main() {
    // examples of good use of enum classes (safe)
    Animal a = Animal::deer; // a = 1
    Mammal m = Mammal::deer; // m = 1
    // int n = a; // error (type control)
    // if (m == a) // error (good)
    // std::cout << "not good!" << '\n';
    // if (a == Mammal::deer) // error (good)
    // std::cout << "not good!" << '\n';
    int nA = static_cast<int>(a);
    int nM = static_cast<int>(m);
    if (nA == nM)
        std::cout << "good!" << '\n';
    if (static_cast<Mammal>(nA) == Mammal::deer)
        std::cout << "good!" << '\n';
    return 0;


    return 0;
}