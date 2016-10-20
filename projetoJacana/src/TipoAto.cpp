#include "TipoAto.h"

const void      *TipoAto :: definirAtosAplicaveis( ) {

this->tiposDisponiveisDeAtos = new  std::vector< std::string * >();


tiposDisponiveisDeAtos->push_back ( new std::string( "Livro-2R-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro-2A-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Prenotação-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Certidão-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Abertura-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Notificação-Intimação-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Prenotação-Desconto-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro-2R-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro-2A-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Certidão-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Informação-Verbal-ou-Eletrônica-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Visualização-eletrônica-de-matrícula-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Notificação-RTD" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Registros-RTD-LB" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Registro-RPJ-LA" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro 3R-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Certidão-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Prenotação-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Certidão-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro-2R-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro-2A-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Abertura-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro-2R-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro- 2A-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Abertura-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Abertura-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Certidão-RPJ" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Condomínio-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Incorporação-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Loteamento-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Exame-e-álculo-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro-3A-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Visualização-eletrônica-de-documento-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Certidão-RTD" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Prenotação-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Busca-RPJ" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Busca-RTD" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Notificação-Intimação-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Notificação-Intimação-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Notificação-Intimação-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Informação-Eletrônica-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Informação-Eletrônica-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Informação-Eletrônica-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Prenotação-Desconto-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Informação-Verbal-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Informação-Verbal-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Informação-Verbal-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Exame-e-Cálculo-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Exame-e-Cálculo-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Exame-e-Cálculo-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Visualização-eletrônica-de-documento-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Visualização-eletrônica-de-matrícula-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Visualização-eletrônica-de-documento-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Visualização-eletrônica-de-matrícula-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Visualização-eletrônica-de-documento-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Visualização-eletrônica-de-matrícula-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Prenotação-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Averbação-RRI" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Averbação-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Averbação-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Averbação-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Condomínio-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Condomínio-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Condomínio-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Incorporação-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Incorporação-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Incorporação-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Loteamento-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Registro-RPJ-LB" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Registros-RTD-LC" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro 3A-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro 3A-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro 3A-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro 3R-RRI-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro 3R-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Livro 3R-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Loteamento-RRI-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Loteamento-RRI-SP" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Registro-RPJ-LA-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Registros-RTD-LB-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Certidão-RPJ-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Certidão-RPJ-GG" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Certidão-RTD-G" ) );
tiposDisponiveisDeAtos->push_back ( new std::string( "Certidão-RTD-GG" ) );

    return  NULL;

}


const std::vector< std::string * > *TipoAto :: retornarTiposAtosValidos ( ) {

if ( this->tiposDisponiveisDeAtos != nullptr  ) {
if ( ( (unsigned short ) this->tiposDisponiveisDeAtos->size() ) > 2 ){

 return this->tiposDisponiveisDeAtos;

} else {

return nullptr;

}


} else {


return nullptr;

}

}


TipoAto::TipoAto(){

this->definirAtosAplicaveis( );

}

TipoAto::~TipoAto(){


delete  this->tiposDisponiveisDeAtos;


}
