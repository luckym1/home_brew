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
#include <sys/socket.h>
#include <sys/un.h>
#include <string.h>
#include <stdio.h>
using namespace std;



//Class that can spin up a Unix Socket
class Usoc{
  public:
    Usoc(string socketLocation);

  private:
    int sockfd;
    struct sockaddr_un addr;
    string socLoc;
};
#endif
