#include <iostream>
#include <string>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{

    Chef cook("Gordon Ramsay");
    cook.makeSalad();
    cook.makeSoup();

    Chef cook2("Anthony Bourdain");
    cook2.makeSalad();
    cook2.makeSoup();


    //ItalianChef cook2("Anthony Bourdain");
    //cook2.makePasta();


    return 0;
}
