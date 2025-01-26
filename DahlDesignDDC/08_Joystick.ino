//-----------------------
//-------JOYSTICK--------
//-----------------------

#define BUTTONCOUNT 16
#define HATCOUNT 0

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_JOYSTICK,
    BUTTONCOUNT,   //Button count
    HATCOUNT,      //Hat switch count
    true,          //X axis, used for clutch
    false,          //Y axis, used for button mode field
    false,          //Z axis, used for encoder mode field
    false,         //Rx axis 
    false,          //Ry axis, used for bite point posting
    false,         //Rz axis 
    false,         //Rudder
    false,          //Throttle, used for dual clutch mode 4
    false,         //Accelerator
    false,          //Brake, used for dual clutch mode 4
    false);        //Steering
