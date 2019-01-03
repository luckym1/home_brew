//
//  brewery.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/3/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef brewery_hpp
#define brewery_hpp

//Base class that contains the location for parts contained within the Brewery
class Brewery{
public:
    //Port location for each instance of a Brewery part
    unsigned location;
    
    //Constructor defaults set to 0
    Brewery(unsigned location = 0);
    
    //Getter and setters
    void setLoc(unsigned location);
    
    /* Passes by reference or by value place NULL in fuction if passing by value
     * unsigned example = testBrew.getLoc(NULL);
     * testBrew.getLoc(&example);
     */
    unsigned getLoc(unsigned * location);
};

#endif /* brewery_hpp */
