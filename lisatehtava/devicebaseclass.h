#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H
#include <string>
using namespace std;

class DeviceBaseClass
{
public:
    DeviceBaseClass();
    void setDeviceID();
    short getDeviceID() const;
protected:
    short deviceID;
};

#endif // DEVICEBASECLASS_H
