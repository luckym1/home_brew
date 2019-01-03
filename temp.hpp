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

class Temp : public Sensor{
public:
    
    //Constructor default to 0
    Temp(unsigned location = 0, unsigned address = 0);
    
    //overdriven temp method? Ryan Help!
};

#endif /* temp_hpp */
