#include "Casa.h"

Casa::Casa(int i = 0, int j = 0, int distanciOrg = 0, int distanciaDest = 0)
{
    this->i = i;
    this->j = j;
    this->distanciaOrg = distanciaOrg;
    this->distanciaDest = distanciaDest;
}

int Casa::getI()
{
    return i;
}

void Casa::setI(int i)
{

    this->i = i;
}

int Casa::getJ()
{

    return j;
}

void Casa::setJ(int j)
{
    this->j = j;
}

int Casa::getCusto()
{
    return custo;
}

void Casa::setCusto(int custo)
{
    this->Custo = Custo;
}

int Casa::getDistanciaOrg()
{

    return distanciaOrg;
}

void Casa::setDistanciaOrg(int distanciaOrg)
{
    this->distanciaOrg = distanciaOrg;
}

int Casa::getDistanciaDest()
{
    return distanciaDest;
}

void Casa::setDistanciaDest(int distanciaDest)
{
    this->distanciaDest = distanciaDest;
}
