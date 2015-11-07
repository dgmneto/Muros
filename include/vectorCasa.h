#ifndef VECTORCASA_H
#define VECTORCASA_H

#include <Casa.h>
#include <vector>

using namespace std;

class vectorCasa
{
    public:
        vectorCasa();
        ~vectorCasa(void);
        void insert(Casa *casa);
        vector<Casa *> *getCasas();
        void setCasas(vector<Casa *> *casas);
    private:
        vector<Casa *> *casas;
};

#endif // VECTORCASA_H
