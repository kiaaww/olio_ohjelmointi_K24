#include "italianchef.h"
#include "chef.h"
#include <iostream>
#include <string>
using namespace std;

ItalianChef::ItalianChef(string s):Chef(s)
{
    name=s;
    cout<<"Chef "<<name<<" konstruointi"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int a, int b)
{
    //t.3 cout<<"Chef "<<name<<" makes pasta"<<endl;
    //t.4
    cout<<"Chef "<<name<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<" uses "<<a<<" grams of flour"<<endl;
    cout<<"Chef "<<name<<" uses "<<b<<" desiliters of water"<<endl;
}
