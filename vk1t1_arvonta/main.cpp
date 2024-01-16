#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num;

    srand(time(0));
    int random=rand()%20;

    do{
        cout<<"Guess the right number"<<endl;
        cin>>num;

    if(num==random){
        cout<<"The right one"<<endl;
    }
    else if(num<random){
        cout<<"higher"<<endl;
    }
    else if(num>random){
        cout<<"lower"<<endl;
    }
    } while(num!=random);
    return 0;
}
