#include "Escrevente.h"

const void *Escrevente :: realizarDefinicaoDoNomeDeste( const std::string *valorAplicado){

if ( ( ( short ) sizeof( valorAplicado ) )  > 0  && valorAplicado != nullptr ){


if( (unsigned) strlen( valorAplicado->c_str() ) > 3 ){

this-> nomeDeste  = new std::string ( *valorAplicado );

 return NULL;

 }else{

 return NULL;

 }


 } else {

 return NULL;

 }

}

const std::string *Escrevente :: retornarNomeDeste( ){


if ( ( ( short ) sizeof( this->nomeDeste ) )  > 0 && this->nomeDeste != nullptr  ){

return this->nomeDeste;

} else {

return nullptr;

}

}

Escrevente :: Escrevente( const std::string *valorInsercao ){

if ( ( ( short ) sizeof( valorInsercao ) )  > 0  &&  valorInsercao != nullptr ){


if( (unsigned) strlen( valorInsercao->c_str() ) > 3 ){


this-> realizarDefinicaoDoNomeDeste( valorInsercao );


} else {

this-> nomeDeste = nullptr;

}


} else {

this-> nomeDeste = nullptr;

}

}


Escrevente :: ~Escrevente(){

delete this->nomeDeste;

}
