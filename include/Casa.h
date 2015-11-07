#ifndef CASA_H
#define CASA_H


class Casa
{
    public:
        Casa();
        Casa(int i = -1, int j = -1, int distanciaDest = 0, int custo = 0);
        int getI();
        void setI(int i);
        int getJ();
        void setJ(int j);
        int getDistanciaDest();
        void setDistanciaDest(int distanciaDest);
        int getCusto();
        void setCusto(int custo);
    private:
        int i;
        int j;
        int distanciaDest;
        int custo;
};

#endif // CASA_H
