#define LARGURA_MAXIMA_ (unsigned short) ( 3 )


#include "Servico.h"


const  void     *Servico::definirAsClasses( ) {

this->classesDisponiveis = new std::string [ LARGURA_MAXIMA_ ];
 *(this->classesDisponiveis+0) =   "RRI" ;
 *(this->classesDisponiveis+1) =   "RTD" ;
 *(this->classesDisponiveis+2) =   "RPJ" ;

    return  NULL;
}

const  std::string  *Servico::classes( ) {

if ( this->classesDisponiveis != nullptr && this->classesDisponiveis != NULL
    && ( ( unsigned short ) sizeof(this->classesDisponiveis) ) > 0 ) {

    return this->classesDisponiveis;

} else {

    return nullptr;

}

}


Servico::Servico(){

this->definirAsClasses( );

}

Servico::~Servico(){


delete[]  this->classesDisponiveis;

}
