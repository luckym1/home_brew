//
//  brewControl.hpp
//  HomeBrew
//
//  Created by Michael Lucky on 1/2/19.
//  Copyright © 2019 Michael Lucky. All rights reserved.
//

#ifndef brewControl_hpp
#define brewControl_hpp

//Base class that contains the location for parts contained within the Brewery
class Brewery{
public:
    //Port location for each instance of an I2C
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

//Uses a triac and zero crossing detector to truncate the AC signal to
//the pump motor to control power and flow rate
class Pump : public I2C{
public:
    
    //Constructor defaults set to 0
    Pump(unsigned location = 0, unsigned address = 0);
    
    //Turns on pump from 0 to %100 with optional duration
    //Returns -1 for error 0 for success
    int On(unsigned percent, unsigned duration);
    
    //Turns off pump
    //Returns -1 for error 0 for success
    int Off();
};

//This has the same methods as Pump but is in a seperate class because
//the on and off methods are used differently at the hardware level

//PWM signal to control servo valve angle
class Valve : public I2C{
public:
    
    //Constructor defaults set to 0
    Valve(unsigned location = 0, unsigned address = 0);
    
    //Turns on valve from 0 to %100 with optional duration
    //Returns -1 for error 0 for success
    int On(unsigned percent, unsigned duration);
    
    //Turns off valve
    //Returns -1 for error 0 for success
    int Off();
};

//Separate microcontroller on I2C bus dedicated to reading all sensor
//inputs from the brewery
class Sensor : public I2C{
public:
    
    //Constructor default to 0
    Sensor(unsigned location = 0, unsigned address = 0);
    
    //Passes by reference the value from each sensor
    //Return -1 for error 0 for success
    int getTemp(long * temp);
    
    int getWeight(long * weight);
    
    int getFlame(long * current);
};

//AC spark generator not on I2C bus driven from Pi 3.3V GPIO pin
class Spark : public Brewery{
public:
    
    //Constructor default to 0
    Spark(unsigned location = 0);
    
    //Turns on ignitor with optional duration
    //Return -1 for error 0 for success
    int on(unsigned duration);
    
    //Turns off igniter
    //Return -1 for error 0 for success
    int off();
};
//This has the same methods as Spark but is in a seperate class because
//the on and off methods are used differently at the hardware level

//Main gas solenoid cutoff vlave driven from Pi 3.3V GPIO pin
class SafetyValve : public Brewery{
    
    //Constructor default at 0
    SafetyValve(unsigned location = 0);
    
    //Turns on solenoid valve with optional duration
    //Return -1 for error 0 for success
    int on(unsigned duration);
    
    //Turns off solenoid valve
    //Return -1 for error 0 for success
    int off();
};
#endif /* brewControl_hpp */
