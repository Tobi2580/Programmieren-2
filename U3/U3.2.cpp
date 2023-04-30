#include <iostream>
#include <vector>
#include <array>

using namespace std;

typedef struct {
    char c;
    int n;
    double d;
} Mix;

//Define functions
void extractInts(const vector<Mix> &mixVector, int arr[]);

int main() {
    //initializing variables
    Mix mix1{'a', 1, 1.1}, mix2{'b', 2, 2.2}, mix3{'c', 3, 3.3};
    vector<Mix> mixVector;
    int *arr = new(nothrow) int[3];

    //push variables onto vector
    mixVector.push_back(mix1);
    mixVector.push_back(mix2);
    mixVector.push_back(mix3);

    //move int values from vector to intStdArray
    extractInts(mixVector, arr);
    array<int, 3> intStdArray = {arr[0], arr[1], arr[2]};

    //print values
    for (int num: intStdArray) {
        cout << num << '\n';
    }
    return 0;
}

//functions
void extractInts(const vector<Mix> &mixVector, int arr[]) {
    //move int values from vector to array
    for (int i = 0; i < mixVector.size(); ++i) {
        arr[i] = mixVector.at(i).n;
    }
}