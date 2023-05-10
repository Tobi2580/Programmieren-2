#include <iostream>
using std::cout; using std::string;
int n = 7;
struct Test{
    string s;
    int n;
    double d;
    void print();
    // Inliner
    void setN(int n){
        this->n = n + ::n;
    }
};
int main()
{
    Test t1{"Hello", 1, 3.1415};
    t1.setN(20);
    t1.print();
    return 0;
}
