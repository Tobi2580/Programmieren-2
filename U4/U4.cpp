#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// ...
int main()
{
    vector<float> vf{1.2, 3.4, 5.6, 7.8, 9.0};
    //cout << "Arithm. mean = " << mean(vf) << endl;
    vector<double> vd{1.2, 3.4, 5.6, 7.8, 9.0};
    cout << "Arithm. mean = " << mean(vd) << endl;
    vector<int> vn{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Arithm. mean = " << mean(vn) << endl;
    vector<long> vl{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Geometr. mean = " << mean(vl) << endl;
    vector<char> vc1{'a', 'b', 'c', 'd', 'e', 'f'};
    cout << "Middle val = " << mean(vc1) << endl;
    vector<char> vc2{'a', 'b', 'c', 'd', 'e'};
    cout << "Middle val = " << mean(vc2) << endl;
    return 0;
}