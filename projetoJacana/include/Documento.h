#ifndef DOCUMENTO_H
#define DOCUMENTO_H

#include "../include/Min.h"

class Documento
{

    private:


    std::vector< std::string * >  *titulosValidos;
    const void                    *definirTitulosAplicaveis ( );


    public:


        const  std::vector< std::string *>  *retornarTitulosValidos ( );

        Documento();
       ~Documento();

};

#endif // DOCUMENTO_H
