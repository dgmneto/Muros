#include "vectorCasa.h"

vectorCasa::vectorCasa()
{
    casas = new vector<Casa *>();
}

vectorCasa::~vectorCasa(void)
{
    delete casas;
}

void vectorCasa::insert(Casa *casa)
{
    vector<Casa *>::iterator it;
    for(it = casas->begin(); it != casas->end(); ++it)
    {
        Casa atual = **it;
        if(atual.getCusto() >= casa->getCusto() && atual.getDistanciaDest() >= casa->getDistanciaDest())
        {
            break;
        }
    }
    casas->insert(it, casa);
}

vector<Casa *> *vectorCasa::getCasas()
{
    return casas;
}

void vectorCasa::setCasas(vector<Casa *> *casas)
{

    this->casas = casas;
}
