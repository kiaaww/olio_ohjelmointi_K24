#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H

class DeviceDisplay
{
public:
    DeviceDisplay();
    void setDisplayResolution(short res);
    short getDisplayResolution();
private:
    short displayResolution;
};

#endif // DEVICEDISPLAY_H
