#ifndef INTERESSADO_H
#define INTERESSADO_H

#include "../include/Min.h"

class Interessado
{


    private:

        std::string         *nomeDeste;
        const void          *realizarDefinicaoDoNomeDeste( const std::string* );

    public:

        const std::string   *retornarNomeDeste( );


        Interessado( const std::string * );
       ~Interessado();


};

#endif // INTERESSADO_H
