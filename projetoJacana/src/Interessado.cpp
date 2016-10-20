#include "Interessado.h"

const void *Interessado :: realizarDefinicaoDoNomeDeste( const std::string *valorAplicado){

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

const std::string *Interessado :: retornarNomeDeste( ){


if ( ( ( short ) sizeof( this->nomeDeste ) )  > 0 && this->nomeDeste != nullptr  ){

return this->nomeDeste;

} else {

return nullptr;

}

}

Interessado :: Interessado ( const std::string *valorInsercao ){

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


Interessado :: ~Interessado(){

delete this->nomeDeste;

}
