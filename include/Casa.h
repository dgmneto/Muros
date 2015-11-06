#ifndef CASA_H
#define CASA_H


class Casa
{
    public:
        Casa();
        int getI();
        void setI(int i);
        int getJ();
        void setJ(int j);
        int getDistanciaOrg();
        void setDistanciaOrg(int distanciaOrg);
        int getDistanciaDest();
        void setDistanciaDest(int distanciaDest);
    private:
        int i;
        int j;
        int distanciaOrg;
        int distanciaDest;
};

#endif // CASA_H
