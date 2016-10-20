#include "AtoRealizado.h"

const   void    *AtoRealizado :: processarGerenciamentoDeCricao(

Escrevente **acessoEscrevente, Data **acessoData, Protocolo **acessoProtocolo,
Interessado **acessoInteressado, Documento **acessoDocumento, Matricula **acessoMatricula,
Livro **acessoLivro, Servico **acessoServico, TipoAto **acessoTipoAto

){


if( ( (unsigned short) sizeof( acessoEscrevente ) ) > 0 &&  acessoEscrevente != nullptr ){

this->atoescrevente =   *acessoEscrevente;

}

if( ( (unsigned short) sizeof( acessoData ) ) > 0 &&  acessoData != nullptr ){

this->atodata =     *acessoData;

}

if( ( (unsigned short) sizeof( acessoInteressado ) ) > 0 &&  acessoInteressado != nullptr ){

this->atointeressado =  *acessoInteressado;

}

if( ( (unsigned short) sizeof( acessoDocumento ) ) > 0 &&  acessoDocumento != nullptr ){

this->atodocumento =    *acessoDocumento;

}

if( ( (unsigned short) sizeof( acessoMatricula ) ) > 0 &&  acessoMatricula != nullptr ){

this->atomatricula =    *acessoMatricula;

}

if( ( (unsigned short) sizeof( acessoLivro ) ) > 0 &&  acessoLivro != nullptr ){

this->atolivro =    *acessoLivro;

}

if( ( (unsigned short) sizeof( acessoServico ) ) > 0 &&  acessoServico != nullptr ){

this->atoservico =    *acessoServico;

}

if( ( (unsigned short) sizeof( acessoTipoAto ) ) > 0 &&  acessoTipoAto != nullptr ){

this->atotipoato =    *acessoTipoAto;

}



        return  NULL;
}



const   Escrevente      **AtoRealizado::retornarEscrevente ( ) {

return (const Escrevente **)&this->atoescrevente;

}
const   Data      **AtoRealizado::retornarData  ( ) {

return (const Data **)&this->atodata;

}
const   Protocolo      **AtoRealizado::retornarProtocolo  ( ) {

return (const Protocolo **)&this->atoprotocolo;

}
const   Interessado      **AtoRealizado::retornarInteressado  ( ) {

return (const Interessado **)&this->atointeressado;

}
const   Documento      **AtoRealizado::retornarDocumento  ( ) {

return (const Documento **)&this->atodocumento;

}
const   Matricula      **AtoRealizado::retornarMatricula  ( ) {

return (const Matricula **)&this->atomatricula;

}
const   Livro      **AtoRealizado::retornarLivro  ( ) {

return (const Livro **)&this->atolivro;

}
const   Servico      **AtoRealizado::retornarServico  ( ) {

return (const Servico **)&this->atoservico;

}
const   TipoAto      **AtoRealizado::retornarTipoAto  ( ) {

return (const TipoAto **)&this->atotipoato;

}


AtoRealizado::AtoRealizado(


Escrevente **insercao__acessoEscrevente, Data **insercao__acessoData,
Protocolo **insercao__acessoProtocolo,Interessado **insercao__acessoInteressado,
Documento **insercao__acessoDocumento, Matricula **insercao__acessoMatricula,
Livro **insercao__acessoLivro, Servico **insercao__acessoServico, TipoAto **insercao__acessoTipoAto


){


this->processarGerenciamentoDeCricao(

insercao__acessoEscrevente, insercao__acessoData,
insercao__acessoProtocolo, insercao__acessoInteressado,
insercao__acessoDocumento, insercao__acessoMatricula,
insercao__acessoLivro, insercao__acessoServico,insercao__acessoTipoAto

);


}

AtoRealizado::~AtoRealizado(){


    delete this->atodata;
    delete this->atodocumento;
    delete this->atoescrevente;
    delete this->atointeressado;
    delete this->atolivro;
    delete this->atomatricula;
    delete this->atoprotocolo;
    delete this->atoservico;
    delete this->atotipoato;

}
