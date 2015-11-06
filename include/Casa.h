#ifndef CASA_H
#define CASA_H


class Casa
{
    public:
        Casa();
        Casa(int i, int j, int distanciaOrg, int distanciaDest);
        int getI();
        void setI(int i);
        int getJ();
        void setJ(int j);
        int getCusto();
        void setCusto(int custo);
        int getDistanciaOrg();
        void setDistanciaOrg(int distanciaOrg);
        int getDistanciaDest();
        void setDistanciaDest(int distanciaDest);
    private:
        int i;
        int j;
        int custo;
        int distanciaOrg;
        int distanciaDest;
};

#endif // CASA_H
