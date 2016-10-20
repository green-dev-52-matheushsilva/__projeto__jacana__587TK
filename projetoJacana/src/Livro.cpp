#include "Livro.h"

const void  *Livro::especificarOIdentificadorDeste( const std::string  *valorInsercao ){

if ( ( ( short ) sizeof( valorInsercao ) )  > 0  && valorInsercao != nullptr ){

this->especificadorDeste =  new std::string ( *valorInsercao );

    return NULL;

} else {

    return NULL;

}

}

const std::string  *Livro:: retornarOEspecificadorDeste( ) {

if ( ( ( short ) sizeof( this->especificadorDeste ) )  > 0  && this->especificadorDeste != nullptr ){

    return  this->especificadorDeste;
} else{


    return  nullptr;

}


}


Livro::Livro( const std::string  *valorAtribuido ){

this->especificarOIdentificadorDeste( valorAtribuido );

}


Livro::~Livro(){

delete Livro::especificadorDeste;

}
