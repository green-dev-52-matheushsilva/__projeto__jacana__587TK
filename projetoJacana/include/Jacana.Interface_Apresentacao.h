#ifndef JACANA_INTERFACE_APRESENTACAO_H
#define JACANA_INTERFACE_APRESENTACAO_H

#include "../include/Min.h"
#include "../include/MinIntr.h"


class JacanaInterface_Apresentacao : public Gtk::Window {

    private:

    Gtk::Box        *caixaGestora;
    Gtk::Button     *btRegistroAto;
    Gtk::Button     *btSobre;


    const   void    *realizarEstruturacao ( );


    protected:

    void            acaoBtRegistroAto ( bool );
    void            acaoBtSobre ( bool );


    public:

        JacanaInterface_Apresentacao( );
        virtual ~JacanaInterface_Apresentacao( );



};

#endif // JACANA_INTERFACE_APRESENTACAO_H
