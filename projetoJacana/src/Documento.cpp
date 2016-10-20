#include "Documento.h"


const void *Documento :: definirTitulosAplicaveis() {

this->titulosValidos =  new std::vector< std::string * >();


titulosValidos->push_back( new std::string( "Escritura Pública" ) );
titulosValidos->push_back( new std::string( "Instrumento Particular" ) );
titulosValidos->push_back( new std::string( "Requerimento" ) );
titulosValidos->push_back( new std::string( "Mandado" ) );
titulosValidos->push_back( new std::string( "Notificação" ) );
titulosValidos->push_back( new std::string( "Penhora Online" ) );
titulosValidos->push_back( new std::string( "Formal Partilha" ) );
titulosValidos->push_back( new std::string( "Retificação" ) );
titulosValidos->push_back( new std::string( "Carta de Sentença" ) );
titulosValidos->push_back( new std::string( "Usucapião" ) );
titulosValidos->push_back( new std::string( "Carta de Adjudicação" ) );
titulosValidos->push_back( new std::string( "Oficio" ) );
titulosValidos->push_back( new std::string( "Cédula" ) );
titulosValidos->push_back( new std::string( "Ex-Oficio" ) );
titulosValidos->push_back( new std::string( "Certidão" ) );
titulosValidos->push_back( new std::string( "Regularização" ) );

    return  NULL;

}


const std::vector< std::string * > *Documento :: retornarTitulosValidos() {

if ( this->titulosValidos != nullptr  ) {
if ( ( (unsigned short ) this->titulosValidos->size() ) > 2 ){

 return this->titulosValidos;

} else {

return nullptr;

}


} else {


return nullptr;

}

}


Documento::Documento(){


this->definirTitulosAplicaveis( );


}

Documento::~Documento(){


delete this->titulosValidos;


}
