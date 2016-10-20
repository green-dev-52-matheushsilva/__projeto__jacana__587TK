#ifndef ESCREVENTE_H
#define ESCREVENTE_H

#include "../include/Min.h"


    class Escrevente{

    private:

        std::string         *nomeDeste;
        const void          *realizarDefinicaoDoNomeDeste( const std::string* );

    public:

        const std::string   *retornarNomeDeste( );


        Escrevente( const std::string * );
       ~Escrevente( );

    };

#endif // ESCREVENTE_H
