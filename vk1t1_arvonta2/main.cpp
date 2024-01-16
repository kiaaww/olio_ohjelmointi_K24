#include <iostream>

using namespace std;
int game(int maxnum);
int fnum=0;

int main()
{

    int allnum=game(fnum);
    cout << "arvauksia: " <<allnum<< endl;
}

int game(int maxnum)
{

    int num=1;
    srand(time(0));
    maxnum=rand()%20;

    while(num!=maxnum){

        cout<<"Guess the right number"<<endl;
        cin>>num;

        if(num==maxnum){
            cout<<"The right one"<<endl;
        }
        else if(num<maxnum){
            cout<<"higher"<<endl;
        }
        else if(num>maxnum){
            cout<<"lower"<<endl;
        }
        fnum++;
    }

    return fnum;

}
