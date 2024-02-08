#include "mydeviceui.h"
#include "DeviceMouse.h"
#include "DeviceTouchPad.h"
#include "DeviceDisplay.h"
#include <iostream>
using namespace std;

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;
}

void MyDeviceUI::uiShowMenu()
{
    cout<<"DEVICE MENU"<<endl; cout<<"==========="<<endl;
    cout<<"1. Set Mouse Information"<<endl;
    cout<<"2. Set Touch Pad Information"<<endl;
    cout<<"3. Set Display Information"<<endl;
    cout<<"4. Show Devices Information"<<endl;
    cout<<"5. Finish"<<endl;
    cout<<"Choose: ";
}

void MyDeviceUI::uiSetMouseInfo()
{
    short primaryButton;
    cout<<"Set Mouse Primary Button: ";
    cin>>primaryButton;
    objectDeviceMouse->setPrimaryButton(primaryButton);
}

void MyDeviceUI::uiSetTouchPadInfo()
{
    short touchPadSens;
    cout<<"Enter touchpad sensitivity: ";
    cin>>touchPadSens;
    objectDeviceTouchPad->setTouchPadSens(touchPadSens);
}

void MyDeviceUI::uiSetDisplayInfo()
{
    short displayResolution;
    cout<<"Enter display resolution: ";
    cin>>displayResolution;
    objectDeviceDisplay->setDisplayResolution(displayResolution);
}

void MyDeviceUI::uiShowDeviceInfo()
{
    cout<<"Mouse primary Button: "<<objectDeviceMouse->getPrimaryButton()<<endl;
    cout<<"TouchPad sensitivity: "<<objectDeviceTouchPad->getTouchPadSens()<<endl;
    cout<<"Display resolution: "<<objectDeviceDisplay->getDisplayResolution()<<endl;

}
