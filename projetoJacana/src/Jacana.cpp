#define     jacana      main ( int argc , char **argv )


/*
#include "../include/Escrevente.h"
#include "../include/Data.h"
#include "../include/Protocolo.h"
#include "../include/Interessado.h"
#include "../include/Documento.h"
#include "../include/Matricula.h"
#include "../include/Livro.h"
#include "../include/Servico.h"
#include "../include/TipoAto.h"
Escrevente *eu = new Escrevente( new std::string("JOAO FRANCISCO") );
std::cout << "Escrevente:" << *eu->retornarNomeDeste( ) << std::endl;
delete eu;


std::string *atribuiData = nullptr;
Data *d = new Data ( new char( 'h' ), &atribuiData );
std::cout << "DATA:" << *atribuiData  << std::endl;

delete atribuiData;
delete d;


std::cout << "Protocolo:" << *Protocolo::gerarNumeroDeProtocolo( new uint16_t( 2100 ) ) << std::endl;


Interessado *oint =  new Interessado( new std::string("Marcos Belluti") );
std::cout << "Interessado:" << *oint->retornarNomeDeste() << std::endl;
delete oint;


Documento *doc = new Documento;
std::cout << "Titulo/Documento:" << *doc->retornarTitulosValidos()->at( 1 ) << " -- ";
delete doc;

std::cout << "Matricula:" << *Matricula::atribuirNumeroDeMatricula( new uint16_t(16201) ) << std::endl;



Livro *livro = new Livro( new std::string ("A2") );
std::cout << "Livro:" << *livro->retornarOEspecificadorDeste ( ) << std::endl;
delete  livro;


Servico *mserv = new Servico ( );
std::cout << "Servico:" << *(mserv->classes()+2) << "." << std::endl;
delete mserv;


TipoAto *tp = new TipoAto ( );
std::cout << "Tipo/ato:" << *tp->retornarTiposAtosValidos()->at( 20 ) << std::endl;
delete tp;
*/


#include "../include/Jacana.Interface_Apresentacao.h"


 int     jacana {




auto aplicacao = Gtk::Application::create( argc, argv, "br.com.projetojacana" );
JacanaInterface_Apresentacao *janela_1  = new JacanaInterface_Apresentacao;




    return aplicacao->run ( *janela_1 );
}
