#include "asunto.h"
#include "katutaso.h"
#include <iostream>
using namespace std;

Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
}
void Asunto::maarita(int a, int b)
{
    asukasMaara=a;
    neliot=b;
    cout<<"Asunto maaritetty, asukkaita= "<<a<<" nelioita= "<<b<<endl;
}
double Asunto::laskeKulutus(double hinta)
{
    int kulutus=hinta*asukasMaara*neliot;
    //cout<<"Kun hinta on= "<<hinta<<", kulutus on "<<kulutus<<endl;//tehtävän 1 osa


    return kulutus;
}
