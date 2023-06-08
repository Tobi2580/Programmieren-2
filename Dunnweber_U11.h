#ifndef PG2_DUNNWEBER_U11_H
#define PG2_DUNNWEBER_U11_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class tier{
private:
    std::string name;
    int anzahlBeine;
public:
    void beschreibungAusgeben();

    tier(std::string nn, int anzB):name(nn), anzahlBeine(anzB){};
    tier(std::string nn):name(nn), anzahlBeine(4){};

};

#endif //PG2_DUNNWEBER_U11_H
