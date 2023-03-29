//
// Created by hiero on 28.03.2023.
//
#include <iostream>
using std::cout;
struct Point{
    int x;
    int y;
};
int main()
{
    struct Point p1{50, 60};
    int n1 = p1.x, n2 = p1.y;
    // has same behavior like
    struct Point p2{70, 80};
    auto [n3, n4] = p2;
    cout << "n3 = " << n3 << ", n4 = " << n4 << '\n';
    auto & [n5, n6] = p2;
    n5 += 100;
    n6 += 100;
    cout << "p2.x = " << p2.x << ", p2.y = " << p2.y << '\n';
    return 0;
}
