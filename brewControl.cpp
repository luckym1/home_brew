//
//  brewControl.cpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/2/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#include "brewControl.hpp"

//Default location at port 0
Brewery::Brewery(unsigned location){
    this->location = location;
}

//setter
void Brewery::setLoc(unsigned location){
    this->location = location;
}

//getter - by value or reference
unsigned Brewery::getLoc(unsigned * location){
    if(location){
        * location = this->location;
    }
    return this->location;
}

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

//Default address and location at 0
Flow::Flow(unsigned location, unsigned address){
    this->location = location;
    this->address = address;
}

//Returns -1 for error 0 for success
int Flow::on(unsigned percent, unsigned duration){
    return 0;
}

//Returns -1 for error 0 for success
int Flow::off(unsigned duration){
    return 0;
}
