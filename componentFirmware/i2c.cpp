//
//  i2c.cpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#include "i2c.hpp"

//Default address at 0
I2C::I2C(unsigned location, unsigned address){
    this->address = address;
    this->location = location;
}

//setter
void I2C::setAdd(unsigned address){
    this->address = address;
}

//getter - by value or reference
unsigned I2C::getAdd(unsigned int * address){
    if(address){
        * address = this->address;
    }
    return this->address;
}
