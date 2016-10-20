#include "Jacana.Interface_Apresentacao.h"

void    JacanaInterface_Apresentacao :: acaoBtRegistroAto( bool a ) {

if( a ){
std::cout << "ABC...";
}
    return;
}

void    JacanaInterface_Apresentacao :: acaoBtSobre( bool a ) {

if( a ){
std::cout << "RQQ...";
}
    return;
}


const   void    *JacanaInterface_Apresentacao :: realizarEstruturacao ( ) {


this->set_title( "Jaçanã:   VER. 0.0.a1" );
this->set_border_width( 18 );
this->set_size_request( 400 , 400 );

this->caixaGestora = new  Gtk::Box ( );
caixaGestora->set_orientation( Gtk::Orientation::ORIENTATION_VERTICAL );
this->add( *caixaGestora );

this->btRegistroAto = new   Gtk::Button ( "Registrar novo ato" );
this->btSobre = new     Gtk::Button ( "Sobre" );


    this->btRegistroAto->signal_clicked ().connect(

sigc::bind<bool>(

sigc::mem_fun( *this, &JacanaInterface_Apresentacao::acaoBtRegistroAto ),true

)

);



    this->btSobre->signal_clicked ().connect(

sigc::bind<bool>(

sigc::mem_fun( *this, &JacanaInterface_Apresentacao::acaoBtSobre ),true

)


);

this->caixaGestora->pack_start( *this->btRegistroAto );
this->btRegistroAto->show( );

this->caixaGestora->pack_start( *this->btSobre );
this->btSobre->show( );

this->caixaGestora->show( );


        return  NULL;
}



JacanaInterface_Apresentacao :: JacanaInterface_Apresentacao( ){

    this->realizarEstruturacao( );

}

JacanaInterface_Apresentacao :: ~JacanaInterface_Apresentacao( ){

delete this->caixaGestora;
delete this->btSobre;
delete this->btRegistroAto;

}
