//
//  safetyValve.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef safetyValve_hpp
#define safetyValve_hpp

#include "brewery.hpp"

class SafetyValve : public Brewery{
public:
    
    //Constructor default to 0
    SafetyValve(unsigned location = 0);
    
    //Turns on valve with optional duration
    //Returns -1 for error 0 for success
    int on(unsigned percent, unsigned duration);
    
    //Turns off valve
    //Returns -1 for error 0 for success
    int off();
};

#endif /* safetyValve_hpp */
