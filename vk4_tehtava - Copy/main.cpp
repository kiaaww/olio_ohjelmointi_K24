#include <iostream>
#include "asunto.h"
/*#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"*/

using namespace std;

int main()
{

    Asunto *kulut = new Asunto;
    kulut->maarita(2,100);
    kulut->laskeKulutus(1);

    return 0;
}
