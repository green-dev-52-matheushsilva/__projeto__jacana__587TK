#ifndef LIVRO_H
#define LIVRO_H


#include "../include/Min.h"

class Livro
{


    private:

        std::string     *especificadorDeste;
        const void      *especificarOIdentificadorDeste ( const std::string  * );

    public:

        const std::string   *retornarOEspecificadorDeste ( );


        Livro(  const std::string  *  );
       ~Livro();

};

#endif // LIVRO_H
