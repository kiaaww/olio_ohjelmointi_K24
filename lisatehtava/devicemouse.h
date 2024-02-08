#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H

class DeviceMouse
{
public:
    DeviceMouse();
    void setPrimaryButton(short button);
    short getPrimaryButton();
private:
    short primaryButton;
};

#endif // DEVICEMOUSE_H
