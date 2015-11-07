#include "Casa.h"

Casa::Casa(int i, int j, int distanciaDest, int custo)
{
    this->i = i;
    this->j = j;
    this->distanciaDest = distanciaDest;
    this->custo = custo;
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

int Casa::getDistanciaDest()
{
    return distanciaDest;
}

void Casa::setDistanciaDest(int distanciaDest)
{
    this->distanciaDest = distanciaDest;
}

int Casa::getCusto()
{
    return custo;
}

void Casa::setCusto(int custo)
{
    this->custo = custo;
}
