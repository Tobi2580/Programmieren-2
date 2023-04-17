//
// Created by hiero on 14.04.2023.
//
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib> // srand(), rand()
#include <ctime> // time()
using std::cout; using std::vector;
using std::endl; using std::setw;
constexpr int ROWS = 4;
constexpr int COLUMNS = 6;
int main()
{
    // example for initialization - not used
    vector<vector<float>> v1_2d {{20.0, 20.0},
                                 {80.0, 80.0},
                                 {20.0, 80.0},
                                 {80.0, 20.0}};
    // creates 2d_vector initialized with zeros
    vector<vector<int>> v2_2d(ROWS, vector<int>(COLUMNS));
    srand(time(NULL)); // inits rand()
    for (vector<int> & item : v2_2d) {
        for (int & i : item) {
            i = rand() % 100;
            cout << setw(2) << i << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    // Multiply Each Element By 3
    for (auto & item : v2_2d) {
        for (auto & i : item) {
            i *= 3;
            cout << setw(3) << i << ' ';
        }
        cout << endl;
    }
    return EXIT_SUCCESS; // return 0
}
