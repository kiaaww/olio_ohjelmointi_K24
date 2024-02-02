#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    //tehtävän osa 1 main
    /*Asunto tiedot;
    tiedot.maarita(2,100);
    tiedot.laskeKulutus(1);*/

    //tehtävän osa 2 main
    /*Katutaso tulos;
    tulos.maaritaAsunnot();
    Kerros tulos2;
    tulos2.maaritaAsunnot();

    int kokonaisuus = tulos.laskeKulutus(1) + tulos2.laskeKulutus(1);
    cout<<"Kerrosten asuntojen kulutus, kun hinta on=1, on "<<kokonaisuus<<endl;*/

    //tehtävän osa 3 main
    Kerrostalo tiedot;

    int kokonaisuus=tiedot.laskeKulutus(1);
    cout<<"asuntojen kulutus, kun hinta=1, on "<<kokonaisuus<<endl;

    return 0;
}
