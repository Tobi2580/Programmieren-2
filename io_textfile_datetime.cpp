//
// Created by hiero on 31.03.2023.
//
#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;


int main()
{
    //append text to file
    ofstream file;
    file.open("C:/users/hiero/test", ios_base::app);
    file << "welt!\n";
    file.close();

    //output file-content
    ifstream f("C:/users/hiero/test");

    if (f.is_open())
        cout << f.rdbuf();
    auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());

    cout << ctime(&timenow) << endl;

    cout.setf(ios::dec, ios::adjustfield)<< "Hallo" << ios::adjustfield
}