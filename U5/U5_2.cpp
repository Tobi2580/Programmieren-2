#include <iostream>
#include <vector>
#include "person.h"

using namespace std;

int main() {

    vector<struct PStruct> personenVector;

    struct PStruct p1;
    struct PStruct p2 {};
    struct PStruct p3 {"Smith", EyeColor::Green, 1.78 , 1};

    personenVector.push_back(p1);
    personenVector.push_back(p2);
    personenVector.push_back(p3);

    for (const auto & item : v1) {
        cout << item << ' ';
    }
    cout << "\n\n";
    cout << v.at(20);
    return 0;
}