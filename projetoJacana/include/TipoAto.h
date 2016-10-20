#ifndef TIPOATO_H
#define TIPOATO_H

#include "../include/Min.h"


class TipoAto
{


    private:

        std::vector< std::string * >  *tiposDisponiveisDeAtos;
        const void                    *definirAtosAplicaveis ( );


    public:


        const  std::vector< std::string *>   *retornarTiposAtosValidos ( );


        TipoAto( );
       ~TipoAto( );


};

#endif // TIPOATO_H
