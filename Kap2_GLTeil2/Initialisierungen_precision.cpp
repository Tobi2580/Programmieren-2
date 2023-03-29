//
// Created by hiero on 28.03.2023.
//
// Gleitkommazahlen
// -123.456 automatisch Typ double
// -1.93e2 automatisch Typ double
// -123.456f Typ float
// Gibt Genauigkeit der Dezimalstellen an
int precDouble = std::numeric_limits<double>::digits10;
float precFloat{std::numeric_limits<float>::digits10};

std::cout << "\ndouble-Genauigkeit = " << precDouble << '\n';
std::cout << "float-Genauigkeit = " << precFloat << '\n';
}