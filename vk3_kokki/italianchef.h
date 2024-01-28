#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
#include <string>
using namespace std;


class ItalianChef: public Chef{

public:
    ItalianChef(string);
    string getName();
    void makePasta(int, int);//t.4 int int

//t.4
private:
    int water();
    int flour();
};

#endif  //ITALIANCHEF_H
