#ifndef SERVICO_H
#define SERVICO_H


#include "../include/Min.h"

class Servico
{

    private:

    std::string        *classesDisponiveis;
    const  void        *definirAsClasses ( );

    public:


    const  std::string  *classes ( );

    Servico();
   ~Servico();

};

#endif // SERVICO_H
