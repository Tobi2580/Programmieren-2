#include <iostream>
#include <array>

using namespace std;

void printArr(const auto &arr) {
    //Ausgabe Array Größe
    cout << "size: " << size << '\n';

    //Iteration durch Array
    for (auto value : arr){
        cout << value << ' ';
    }
    cout << '\n';

}

int main(){
    //Array deklarieren
    array arr2{4, 5, 6};

    //Array Element überschreiben
    arr2.at(1) = 25;

    //Array Größe ermitteln
    cout << "size: " << arr2.size() << '\n';

    //Iteration durch Array
    for (int element : arr2){
        cout << element << '\n';
    }

    //Übergabe an Funktion
    printArr(arr2);

    return 0;
}
