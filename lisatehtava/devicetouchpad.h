#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H

class DeviceTouchPad
{
public:
    DeviceTouchPad();
    void setTouchPadSens(short sens);
    short getTouchPadSens();
private:
    short touchPadSens;
};


#endif // DEVICETOUCHPAD_H
