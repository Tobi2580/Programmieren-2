#include <iostream>

//reicht das auch? ganz viele Befehle, die man nicht eigenen Funktionen überschreiben will
using namespace std;

class A{
    //warum variablen private und den rest in public?
    //kapseln sie die Klasse so stark wie möglich
private:
    float floatnum_;

    //static int inline?
    //inline: überall wo funktion aufruf den inhalt derFunktion hinkopieren
// numAs wird nicht bei Erstellen der Klasse generiert es soll es schon immer geben
// außerhalb der Klasse
//static wird von allen geteilt
// inline erstelle sie bevor geteilt wird


    static int inline numAs = 0;
public:
    A(float floatnum, std::ostream &ostream) {
        this->floatnum_ = floatnum;
        numAs++;
        ostream << numAs << ". object: ";
    }

    //??cout << er probierts als Klasse zu sehen ansonsten als float
    operator float() {
        return this->floatnum_;
    }

    static void statistics(std::ostream &ostream) {
        ostream << "\nA total of " << numAs << " objects was created.\n";
    }
};

int main() {
    A a(12.34, cout);
    cout << a << endl;
    A b(-34.56, cout);
    cout << b << endl;
    A c(99.88, cout);
    cout << c << endl;

    A::statistics(cout);

    return 0;
}
