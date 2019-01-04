//
//  flame.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef flame_hpp
#define flame_hpp

#include "sensor.hpp"

//Separate microcontroller on I2C bus dedicated to reading all sensor
//inputs from the brewery
class Flame : public Sensor{
public:
    
    //Constructor default to 0
    Flame(unsigned location = 0, unsigned address = 0);
    
    //Passes by reference the value from sensor
    //Data is true if threshold current is met, false if flame is off
    //Return -1 for error 0 for success
    int getData(long * data);
    
};

#endif /* flame_hpp */
