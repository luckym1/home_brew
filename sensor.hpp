//
//  sensor.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef sensor_hpp
#define sensor_hpp

#include "i2c.hpp"

//Separate microcontroller on I2C bus dedicated to reading all sensor
//inputs from the brewery
class Sensor : public I2C{
public:
    
    //Constructor default to 0
    Sensor(unsigned location = 0, unsigned address = 0);
    
    //Passes by reference the value from each sensor
    //Return -1 for error 0 for success
    int getData(void * data);
    
};

#endif /* sensor_hpp */
