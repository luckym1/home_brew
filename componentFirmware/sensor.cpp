//
//  sensor.cpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#include "sensor.hpp"

Sensor::Sensor(unsigned location, unsigned address){
    this->location = location;
    this->address = address;
}

//Cast to each specific data type needed
int Sensor::getData(void * data){
    return 0;
}
