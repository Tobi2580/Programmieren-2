#include <iostream>
#include <array>

using std::cout; using std::array; using std::string;

struct Test{
    string s;
    int n;
    double d;
};

void print(const Test & t){
    cout << '|' << t.s << '|' << t.n << '|' << t.d << '|'<< '\n';
}

int main()
{
    array<int, 3> an1;
    array<int, 3> an2{5};
    cout << '|' << an1[0] << '|' << an1[1] << '|' << an1[2] << '|' << '\n';
    cout << '|' << an2[0] << '|' << an2[1] << '|' << an2[2] << '|' << '\n';
    Test t1;
    Test t2{"Hello"};
    print(t1);
    print(t2);
    return 0;
}
