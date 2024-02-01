#include "asunto.h"
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
double Asunto::laskeKulutus(double kulutus)
{
    int h=1;
    kulutus=h*asukasMaara*neliot;
    cout<<"asunnon kulutus, kun hinta= "<<h<<", on "<<kulutus<<endl;
    return kulutus;
}
