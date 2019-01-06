//
//  usoc.hpp
//  HomeBrew
//
//  Created by Ryan Craig on 1/5/19.
//  Copyright © 2019 Ryan Craig. All rights reserved.
//
#ifndef usoc_h
#define usoc_h

#include <iostream>
using namespace std;

//Class that can spin up a Unix Socket
class Usoc{
  public:
    Usoc(int number);
  private:
    int num;
};
#endif
