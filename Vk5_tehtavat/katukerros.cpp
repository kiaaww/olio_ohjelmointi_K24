#include "katukerros.h"
#include "kerros.h"
#include <iostream>
using namespace std;

Katukerros::Katukerros()
{
    cout<<"Katutaso luotu"<<endl;
}

Katukerros::~Katukerros()
{
    delete as1;
    delete as2;
    as1 = nullptr;
    as2 = nullptr;
}

void Katukerros::maaritaAsunnot()
{
    //cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
}

double Katukerros::laskeKulutus(double hinta)
{
    int kokokulutus=as1->laskeKulutus(1)+as2->laskeKulutus(1);
    return kokokulutus;
}

