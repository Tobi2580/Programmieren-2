#include <iostream>
#include <array>

using namespace std;

struct customer{
    string name;
    int age;
};

void print(const customer & t) {
    cout << '|' << "Kunde" << '|'<< "Alter" << '|' << '\n';
    cout << '|' << t.name << '|' << t.age << '|' << '\n';

}

int main() {
    customer c1{"Tobias", 23};
    print(c1);

    return 0;
}