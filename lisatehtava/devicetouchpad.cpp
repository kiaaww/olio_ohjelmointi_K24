#include "devicetouchpad.h"
using namespace std;

DeviceTouchPad::DeviceTouchPad()
{

}

void DeviceTouchPad::setTouchPadSens(short sens)
{
    touchPadSens = sens;
}

short DeviceTouchPad::getTouchPadSens()
{
    return touchPadSens;
}
