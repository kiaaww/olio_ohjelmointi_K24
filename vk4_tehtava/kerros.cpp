#include "kerros.h"
#include "katutaso.h"
#include <iostream>
using namespace std;

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan katutasolta perittyja asuntoja"<<endl;
    cout<<"Maaritetaan 4 kpl asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}


double Kerros::laskeKulutus(double hinta)
{

    int kokokulutus=as1.laskeKulutus(1)+as2.laskeKulutus(1)+as3.laskeKulutus(1)+as4.laskeKulutus(1);
    return kokokulutus;
}
