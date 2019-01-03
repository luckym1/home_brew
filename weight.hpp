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

class Weight : public Sensor{
public:
    
    //Constructor default to 0
    Weight(unsigned location = 0, unsigned address = 0);
    
    //overdriven weight method? Ryan Help!
};

#endif /* weight_hpp */
