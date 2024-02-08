#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "kerros.h"
#include "katukerros.h"
#include <iostream>
using namespace std;

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);

private:
    Katukerros* eka = new Katukerros();
    Kerros* toka = new Kerros();
    Kerros* kolmas = new Kerros();
};

#endif // KERROSTALO_H
