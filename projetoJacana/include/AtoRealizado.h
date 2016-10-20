#ifndef ATOREALIZADO_H
#define ATOREALIZADO_H

#include "../include/Escrevente.h"
#include "../include/Data.h"
#include "../include/Protocolo.h"
#include "../include/Interessado.h"
#include "../include/Documento.h"
#include "../include/Matricula.h"
#include "../include/Livro.h"
#include "../include/Servico.h"
#include "../include/TipoAto.h"


class AtoRealizado
{

    private:

        Escrevente      *atoescrevente;
        Data            *atodata;
        Protocolo       *atoprotocolo;
        Interessado     *atointeressado;
        Documento       *atodocumento;
        Matricula       *atomatricula;
        Livro           *atolivro;
        Servico         *atoservico;
        TipoAto         *atotipoato;


        const void      *processarGerenciamentoDeCricao(
                           Escrevente **, Data **, Protocolo **, Interessado **,
                           Documento **, Matricula **,Livro **, Servico **, TipoAto **
                           );

    public:


        const   Escrevente          **retornarEscrevente ( );
        const   Data                **retornarData ( );
        const   Protocolo           **retornarProtocolo ( );
        const   Interessado         **retornarInteressado ( );
        const   Documento           **retornarDocumento ( );
        const   Matricula           **retornarMatricula ( );
        const   Livro               **retornarLivro ( );
        const   Servico             **retornarServico ( );
        const   TipoAto             **retornarTipoAto ( );



        AtoRealizado( Escrevente **, Data **, Protocolo **, Interessado **,
                    Documento **, Matricula **,Livro **, Servico **, TipoAto **
                    );


       ~AtoRealizado();

};

#endif // ATOREALIZADO_H
