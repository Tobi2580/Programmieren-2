//
// Created by hiero on 31.03.2023.
//

#include <iostream>

using namespace std;

void swap(int *a, int *b) // Import von Adressen/Zeigern (C und C++)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int& a, int& b) // Import von int per Referenz (nur C++)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i1, i2;
    cout << "Demonstration von Referenzen\n\n"
         << "Geben Sie zwei Ganzzahlen fuer i1 und i2 ein: ";
    cin >> i1 >> i2;
    cout << "\nIhre Eingaben: i1=" << i1 << "  i2=" << i2 << endl;
    swap(&i1,&i2); // Adressen werden als Referenzwerte uebergeben.
    cout << "Nach Aufruf von swap(&i1,&i2): i1="
         << i1 << " i2=" << i2 << endl;
    swap(i1,i2); // Variablen werden per Referenz uebergeben.
    cout << "Nach Aufruf von swap(i1,i2): i1="
         << i1 << " i2=" << i2 << endl;
    return 0;
}