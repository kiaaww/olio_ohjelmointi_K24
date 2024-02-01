#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"

using namespace std;

int main()
{

    Katutaso asunnot;
    asunnot.maaritaAsunnot();
    Asunto tiedot;
    tiedot.maarita(2, 100);
    tiedot.maarita() = asunnot.maaritaAsunnot();

    return 0;
}
