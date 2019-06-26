//
//  temp.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef temp_hpp
#define temp_hpp

#include "sensor.hpp"

//Separate microcontroller on I2C bus dedicated to reading all sensor
//inputs from the brewery
class Temp : public Sensor{
public:
    
    //Constructor default to 0
    Temp(unsigned location = 0, unsigned address = 0);
    
    //Passes by reference the value from each sensor
    //Return -1 for error 0 for success
    int getData(long * data);
    
};

#endif /* temp_hpp */
