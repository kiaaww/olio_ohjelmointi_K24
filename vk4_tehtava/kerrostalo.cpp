#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    int kokokulutus=eka.laskeKulutus(1)+toka.laskeKulutus(1)+kolmas.laskeKulutus(1);
    return kokokulutus;
}


