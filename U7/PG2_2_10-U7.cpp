#include <iostream>

using std::cout, std::endl;

class A {

private:
    static int inline numAs = 0;
    float floatValue_;
public:
    A(float floatValue, std::ostream &ostream) {
        this->floatValue_ = floatValue;
        numAs++;
        ostream << numAs << ". object: ";
    }

    operator float() {
        return this->floatValue_;
    }

    static void statistics(std::ostream &ostream) {
        ostream << "\nA total of " << numAs << " objects was created.\n";
    }
};

int main() {
    A a(12.34, cout);
    cout << a << endl;
    A b(-34.56, cout);
    cout << b << endl;
    A c(99.88, cout);
    cout << c << endl;
    A::statistics(cout);
    return 0;
}