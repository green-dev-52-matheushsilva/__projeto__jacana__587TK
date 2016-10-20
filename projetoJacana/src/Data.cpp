#include "Data.h"

const std::string *Data ::retornarDataDeHoje( ){

    time_t agora = time( 0 );
    char *absorcao = ctime( &agora );

    return new std :: string( absorcao );

}


Data::Data( const char *parametroAvaliador, std::string **cadeiaReceptora ) {


if( parametroAvaliador != nullptr && ((unsigned short) sizeof(parametroAvaliador)) ==  8  ) {


    switch( *parametroAvaliador ) {


    case 'h' :


    *cadeiaReceptora =   ( std::string * ) this->retornarDataDeHoje( ) ;

    break;


    }

}

}


Data::~Data(){}
