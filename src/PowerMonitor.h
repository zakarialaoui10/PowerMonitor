#ifndef PowerMonitor
#define PowerMonitor
#include<Arduino.h>
class Power {
public:
    Power(double *I, double *V, int length);
    double* _I;
    double* _V;
    int _length;
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
    double Req();
    double Xeq();
    double Zeq();
private:
    double calculEff(double values1[], double values2[]);
    double calculMean(double values[]);
};
#endif
