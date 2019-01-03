//
//  brewery.cpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#include "brewery.hpp"

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
