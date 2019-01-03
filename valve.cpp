//
//  valve.cpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#include "valve.hpp"

Valve::Valve(unsigned location, unsigned address){
    this->location = location;
    this->address = address;
}

//Returns -1 for error 0 for success
int Valve::on(unsigned percent, unsigned duration){
    //needs code
    return 0;
}

//Returns -1 for error 0 for success
int Valve::off(){
    //needs code
    return 0;
}
