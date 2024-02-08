#include "devicemouse.h"
#include <iostream>
using namespace std;

DeviceMouse::DeviceMouse()
{

}

void DeviceMouse::setPrimaryButton(short button)
{
    primaryButton = button;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
