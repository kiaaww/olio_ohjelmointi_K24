#include "mydeviceui.h"
#include "devicebaseclass.h"
#include <iostream>

using namespace std;


int main()
{

    MyDeviceUI *Menu = new MyDeviceUI();
    DeviceBaseClass *mouse = new DeviceBaseClass();
    DeviceBaseClass *touchpad = new DeviceBaseClass();
    DeviceBaseClass *display = new DeviceBaseClass();
    int num=0;

    do {
        Menu->uiShowMenu();
        cin>>num;

    if(num==1)
    {
        cout<<"SET MOUSE INFORMATION"<<endl;
        cout<<"====================="<<endl;
        mouse->setDeviceID();
        Menu->uiSetMouseInfo();
    }
    else if(num==2)
    {
        cout<<"SET TOUCH PAD INFORMATION"<<endl;
        cout<<"========================="<<endl;
        touchpad->setDeviceID();
        Menu->uiSetTouchPadInfo();
    }
    else if(num==3)
    {
        cout<<"SET DISPLAY INFORMATION"<<endl;
        cout<<"======================="<<endl;
        display->setDeviceID();
        Menu->uiSetDisplayInfo();
    }
    else if(num==4)
    {
        cout<<"DEVICE INFORMATION"<<endl;
        cout<<"=================="<<endl;
        cout<<"Your Device ID: "<<mouse->getDeviceID()<<endl;
        cout<<"Your Device ID: "<<touchpad->getDeviceID()<<endl;
        cout<<"Your Device ID: "<<display->getDeviceID()<<endl;
        Menu->uiShowDeviceInfo();

    }
    else{cout<<"Collecting information is stopped"<<endl;}
    }
    while (num!=5);

    delete Menu;
    delete mouse;
    delete touchpad;
    delete display;


    return 0;
}
