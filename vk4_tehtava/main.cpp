#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"

using namespace std;

int main()
{

    Katutaso tulos;
    tulos.maaritaAsunnot();
    Kerros tulo;
    tulo.maaritaAsunnot();

    double katutasonk=tulos.laskeKulutus(1);
    double kerrosk=tulo.laskeKulutus(1);
    double kokonaisuus=katutasonk+kerrosk;

    cout<<"asuntojen kulutus, kun hinta=1, on "<<kokonaisuus<<endl;


    return 0;
}
