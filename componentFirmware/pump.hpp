//
//  pump.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef pump_hpp
#define pump_hpp

#include "i2c.hpp"

//Uses a triac and zero crossing detector to truncate the AC signal to
//the pump motor to control power and flow rate
class Pump : public I2C{
public:
    
    //Constructor defaults set to 0
    Pump(unsigned location = 0, unsigned address = 0);
    
    //Turns on pump from 0 to %100 with optional duration
    //Returns -1 for error 0 for success
    int on(unsigned percent, unsigned duration);
    
    //Turns off pump
    //Returns -1 for error 0 for success
    int off();
};

#endif /* pump_hpp */
