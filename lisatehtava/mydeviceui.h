#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();
    void uiSetMouseInfo();
    void uiSetTouchPadInfo();
    void uiSetDisplayInfo();
    void uiShowDeviceInfo();
private:
    DeviceMouse *objectDeviceMouse;
    DeviceTouchPad *objectDeviceTouchPad;
    DeviceDisplay *objectDeviceDisplay;
};


#endif // MYDEVICEUI_H
