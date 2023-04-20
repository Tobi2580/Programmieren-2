#include <iostream>
#include <chrono>
#include <random>
#include <fstream>
#include <array>

using namespace std;

int main() {

    array<array<int, 6>, 50> tan;

    int counter = 0;
    // Iterating over rows
    for (int row = 0; row < tan.size(); row++) {

        // Iterating over columns
        for (int column = 0; column < tan.at(0).size(); column++) {

            // Fill Array Element with TAN-Number
            mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
            tan.at(row).at(column) = rng() % 100000000;

            counter++;
            cout << counter << ": " << tan.at(row).at(column) << '\n';
        }
    }

    ofstream file("tan.txt");

    for (int row = 0; row < tan.size(); row++) {
        for (int column = 0; column < tan.at(0).size(); column++) {
            file << tan.at(row).at(column) << '\n';
        }
    }
    file.width(8);
    file.fill('0');
    file.close();

    return 0;
}
