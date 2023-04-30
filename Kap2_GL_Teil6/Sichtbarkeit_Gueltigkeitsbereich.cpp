// Visibility and scope
#include <iostream>
using std::cout;
using std::string;
// global variables
string a {"global_A\n"}, b{"global_B\n"};
int main(){
    cout << "Begin: main block\n";
    cout << "-----------------\n";
    cout << "a = " << a;
    string a {"main_A\n"};
    cout << "a = " << a;
    cout << "::a = " << ::a;
    { // begin: inner block
        cout << "\nBegin: inner block\n";
        cout << "------------------\n";
        string b{"innerBlock_B\n"};
        string c{"innerBlock_C\n"};
        cout << "::a = " << ::a;
        cout << "b = " << b;
        cout << "c = " << c;
        cout << "::b = " << ::b;
        cout << "------------------\n";
        cout << "End: inner block\n\n";
    } // end: inner block
    cout << "a = " << a;
    cout << "b = " << b;
    // cout << c;
    cout << "----------------\n";
    cout << "End: main block\n";
    return 0;
}
