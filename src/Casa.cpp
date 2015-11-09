#include "Casa.h"

Casa::Casa(Casa *anterior, int i, int j, int distanciaDest, int custo, int custoLocal, char caractere)
{
    this->anterior = anterior;
    this->i = i;
    this->j = j;
    this->distanciaDest = distanciaDest;
    this->custo = custo;
    this->custoLocal = custoLocal;
    this->processado = false;
    this->inserido = false;
    this->index = -1;
    this->caractere = caractere;
}

Casa *Casa::getAnterior()
{
    return anterior;
}

void Casa::setAnterior(Casa *anterior)
{
    this->anterior = anterior;
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

int Casa::getCustoLocal()
{
    return custoLocal;
}

void Casa::setCustoLocal(int custoLocal)
{
    this->custoLocal = custoLocal;
}

bool Casa::isProcessado()
{
    return processado;
}

void Casa::setProcessado(bool processado)
{
    this->processado = processado;
}

bool Casa::isInserido()
{
    return inserido;
}

void Casa::setInserido(bool inserido)
{
    this->inserido = inserido;
}

char Casa::getCaractere()
{
    return caractere;
}
