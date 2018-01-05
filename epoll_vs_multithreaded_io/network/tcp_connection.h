#ifndef _TCP_CONNECTION_
#define _TCP_CONNECTION_

#include "socket.h"
#include <string>
#include <cstddef>

class TCPConnection : public Socket
{   
    public:
        bool create();
        int receive(char* buffer, std::size_t len, int timeout = 0);
        int send(const std::string& buffer, int timeout = 0);
        int send(const char* buffer, std::size_t len, int timeout = 0);
};

#endif
