//
//  spark.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef spark_hpp
#define spark_hpp

#include "brewery.hpp"

class Spark : public Brewery{
public:
    
    //Constructor default to 0
    Spark(unsigned location = 0);
    
    //Turns on spark with optional duration
    //Returns -1 for error 0 for success
    int on(unsigned percent, unsigned duration);
    
    //Turns off spark
    //Returns -1 for error 0 for success
    int off();
};
#endif /* spark_hpp */
