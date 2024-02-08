#ifndef KATUKERROS_H
#define KATUKERROS_H
#include "kerros.h"
#include <iostream>
using namespace std;

class Katukerros : public Kerros{
public:
    Katukerros();
    virtual ~Katukerros();
    Asunto* as1 = new Asunto();
    Asunto* as2 = new Asunto();
    void maaritaAsunnot() override;
    double laskeKulutus(double);
};

#endif // KATUKERROS_H
