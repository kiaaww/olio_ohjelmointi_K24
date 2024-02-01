#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include <iostream>
using namespace std;


class Katutaso : public Kerros{
public:
    Asunto as1;
    Asunto as2;
    Katutaso();
    virtual void maaritaAsunnot() override;
    double laskeKulutus(double);

};

#endif // KATUTASO_H
