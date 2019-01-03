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

class Flame : public Sensor{
public:
    
    //Constructor default to 0
    Flame(unsigned location = 0, unsigned address = 0);
    
    //overdriven weight method? Ryan Help!
};
#endif /* flame_hpp */
