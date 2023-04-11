#ifndef PowerLib_h
#define PowerLib_h
class Power {
public:
    Power(double I[], double V[], int length);
    double iEff();
    double vEff();
    double iMoy();
    double vMoy();
    double P();
    double Q();
    double S();
    double pf();
private:
    double* _I;
    double* _V;
    int _length;
    double calculEff(double values1[], double values2[]);
    double calculMean(double values[]);
};
#endif
