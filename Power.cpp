#include "PowerLib.h"
#include <math.h>
Power::Power(double *I, double *V, int length) {
    _I = new double[length];
    _V = new double[length];
    _length = length;
    for (int i = 0; i < length; i++) {
        _I[i] = I[i];
        _V[i] = V[i];
    }
}

double Power::iEff() {
    double iEffValue = calculEff(_I, _I);
    return iEffValue;
}

double Power::vEff() {
    double vEffValue = calculEff(_V, _V);
    return vEffValue;
}

double Power::iMoy() {
    double iMoyValue = calculMean(_I);
    return iMoyValue;
}

double Power::vMoy() {
    double vMoyValue = calculMean(_V);
    return vMoyValue;
}

double Power::P() {
    double sum = 0.0;
    for (int i = 0; i < _length; i++) {
        sum += _I[i] * _V[i];
    }
    return sum / _length;
}

double Power::Q() {
    double Pvalue = P();
    double Svalue = S();
    double Qvalue = sqrt(Svalue * Svalue - Pvalue * Pvalue);
    return Qvalue;
}

double Power::S() {
    double iEffValue = iEff();
    double vEffValue = vEff();
    return iEffValue * vEffValue;
}

double Power::pf() {
    double Pvalue = P();
    double iEffValue = iEff();
    double vEffValue = vEff();
    return Pvalue / (iEffValue * vEffValue);
}

double Power::calculEff(double values1[], double values2[]) {
    double sum = 0.0;
    for (int i = 0; i < _length; i++) {
        sum += values1[i] * values2[i];
    }
    double mean = sum / _length;
    return sqrt(mean);
}

double Power::calculMean(double values[]) {
    double sum = 0.0;
    for (int i = 0; i < _length; i++) {
        sum += values[i];
    }
    return sum / _length;
}
void Power::print(){
  Serial.print("iEff: ");
  Serial.println(iEff());
  Serial.print("vEff: ");
  Serial.println(vEff());
  Serial.print("iMoy: ");
  Serial.println(iMoy());
  Serial.print("vMoy: ");
  Serial.println(vMoy());
  Serial.print("P: ");
  Serial.println(P());
  Serial.print("Q: ");
  Serial.println(Q());
  Serial.print("S: ");
  Serial.println(S());
  Serial.print("pf: ");
  Serial.println(pf());
  Serial.print("N: ");
  Serial.println(_length);
  Serial.println(".......................................");
}
