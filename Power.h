#ifndef PowerLib_h
#define PowerLib_h
#include<Arduino.h>
class Power {
public:
    Power(double *I, double *V, int length);
    Power(int length);
    Power();
    double iEff();
    double vEff();
    double iMoy();
    double vMoy();
    double P();
    double Q();
    double S();
    double pf();
    void print();
    void push(double i,double v);
    void clear();
public:
    double* _I;
    double* _V;
    int _length;
    double calculEff(double values1[], double values2[]);
    double calculMean(double values[]);
};
#endif
