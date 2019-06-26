//
//  valve.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef valve_hpp
#define valve_hpp

#include "i2c.hpp"

//This has the same methods as Pump but is in a seperate class because
//the on and off methods are used differently at the hardware level

//PWM signal to control servo valve angle
class Valve : public I2C{
public:
    
    //Constructor defaults set to 0
    Valve(unsigned location = 0, unsigned address = 0);
    
    //Turns on valve from 0 to %100 with optional duration
    //Returns -1 for error 0 for success
    int on(unsigned percent, unsigned duration);
    
    //Turns off valve
    //Returns -1 for error 0 for success
    int off();
};

#endif /* valve_hpp */
