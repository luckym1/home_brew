#include "usoc.hpp"


Usoc::Usoc(string socketLocation){
    socLoc = socketLocation;
    //Create socket stream
    sockfd = socket(AF_UNIX,SOCK_STREAM,0);
    if(sockfd == -1){
      printf("Error Creating Socket Stream: %d\n", sockfd);
      exit(1);
    }


    memset(&addr, 0, sizeof(struct socket));
    addr.sun_family = AF_UNIX;
    strcpy(addr.sun_path, socLoc);

    unlink(socLoc);
    if(bind(sockfd, (struct sockaddr_un *) &addr, sizeof(addr)) == -1){
      printf("error");
    }
    //strncpy(addr.sun_path, socketLocation, sizeof(addr.sun_path)-1);
    //bind(sockfd, (struct socketaddr*)&addr, sizeof(addr));
    cout<<"TEST USOC\n";
}



//help from:
// https://www.ibm.com/support/knowledgecenter/en/SSB23S_1.1.0.15/gtpc1/unixsock.html
