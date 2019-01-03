//
//  i2c.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef i2c_hpp
#define i2c_hpp

#include "brewery.hpp"

//Class memeber of Brewery, adds am I2C address for items on the I2C bus
class I2C : public Brewery{
public:
    
    //I2C address hardcoded on integrated circuits
    unsigned address;
    
    //Constructor defaults set to 0
    I2C(unsigned location = 0, unsigned address = 0);
    
    //Getter and setters
    void setAdd(unsigned address);
    
    /* Passes by reference or by value place NULL in fuction if passing by value
     * unsigned example = testI2C.getAdd(NULL);
     * testI2C.getAdd(&example);
     */
    unsigned getAdd(unsigned * address);
};

#endif /* i2c_hpp */
