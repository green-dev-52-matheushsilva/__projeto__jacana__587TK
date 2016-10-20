#ifndef DATA_H
#define DATA_H

#include "../include/Min.h"


class Data
{

    private:

     const std::string  *retornarDataDeHoje ( );

    public:

        Data( const char *, std::string ** );
       ~Data( );

};

#endif // DATA_H
