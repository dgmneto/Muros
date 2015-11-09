#ifndef VECTORCASA_H
#define VECTORCASA_H

#include <Casa.h>
#include <vector>

using namespace std;

class vectorCasa
{
    public:
        vectorCasa(int n, int m);
        ~vectorCasa(void);
        void insert(Casa *casa);
        vector<Casa *> *getCasas();
        void setCasas(vector<Casa *> *casas);
        vector<Casa *>::iterator begin();
        vector<Casa *>::iterator end();
    private:
        vector<Casa *> *casas;
        int **indices;
        int custosN, custosM;
};

#endif // VECTORCASA_H
