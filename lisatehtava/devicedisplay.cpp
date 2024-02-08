#include "devicedisplay.h"

using namespace std;

DeviceDisplay::DeviceDisplay()
{

}

void DeviceDisplay::setDisplayResolution(short res)
{
    displayResolution = res;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}

