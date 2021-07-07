//
//  weight.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef weight_hpp
#define weight_hpp

#include "sensor.hpp"

//Separate microcontroller on I2C bus dedicated to reading all sensor
//inputs from the brewery
class Weight : public Sensor{
public:
    
    //Constructor default to 0
    Weight(unsigned location = 0, unsigned address = 0);
    
    //Passes by reference the value from sensor
    //Data is true if threshold weight is met, false if pot is empty
    //Return -1 for error 0 for success
    int getData(bool * data);
    
};

#endif /* weight_hpp */
