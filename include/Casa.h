#ifndef CASA_H
#define CASA_H

#include <iostream>


class Casa
{
    private:
        Casa *anterior;
        int i;
        int j;
        int distanciaDest;
        int custo, custoLocal;
        bool processado, inserido;
        int index;
        char caractere;
    public:
        Casa(Casa *anterio = 0, int i = -1, int j = -1, int distanciaDest = 0, int custo = 0, int custoLocal = 0, char caractere = 0);
        Casa *getAnterior();
        void setAnterior(Casa *anterior);
        int getI();
        void setI(int i);
        int getJ();
        void setJ(int j);
        int getDistanciaDest();
        void setDistanciaDest(int distanciaDest);
        int getCusto();
        void setCusto(int custo);
        int getCustoLocal();
        void setCustoLocal(int custoLocal);
        bool isProcessado();
        void setProcessado(bool processado);
        bool isInserido();
        void setInserido(bool inserido);
        char getCaractere();
        void setCaractere(char caractere);
        static void inserirOrdenado(Casa **casas, int inicio, int fim, Casa *casa)
        {
            int i;
            int a, b, n;
            if(inicio != fim)
                for(a = inicio, b = fim, n = b - a, i = (a + b)/2 - ((n & 1) ? 1 : 0); n != 1; i = (a + b)/2, n = b - a)
                {
                    if(casas[i]->getCusto() > casa->getCusto())
                        b = i + 1;
                    else if(casas[i]->getCusto() == casa->getCusto())
                    {
                        if(casas[i]->getDistanciaDest() >= casa->getDistanciaDest())
                            b = i + 1;
                        else
                            a = i + 1;
                    }
                    else
                        a = i + 1;

                }
            else
                i = inicio;
            /*
            for(i = inicio; i < fim; i++)
            {
                if(casas[i]->getCusto() == casa->getCusto())
                {
                    if(casas[i]->getDistanciaDest() > casa->getDistanciaDest())
                    {
                        break;
                    }
                }
                else if(casas[i]->getCusto() > casa->getCusto())
                {
                    break;
                }
            }
            */

            for(int j = fim; j > i; j--)
            {
                casas[j] = casas[j - 1];
                casas[j]->index = j;
            }
            casas[i] = casa;
            casa->index = i;
        }
        static void reordenarUnico(Casa **casas, int inicio, Casa *casa)
        {
            inserirOrdenado(casas, inicio, casa->index, casa);
        }
};

#endif // CASA_H
