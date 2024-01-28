#include "chef.h"
#include <iostream>
using namespace std;


Chef::Chef(string s)
{
    name=s;
    cout<<"Chef "<<name<<" konstruointi"<<endl;
}

Chef::~Chef(){
    cout<<"Chef "<<name<<" destroktori"<<endl;
}

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}
