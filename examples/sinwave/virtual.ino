#include"PowerMonitor.h"
#define N 500
double V[N]={};
double I[N]={};
int i=0;
double Vinst(double t) {
  return 5 * sin(2 * 180 * 50 * t);
}
double Iinst(double t) {
  double dephasage=30;
  return 5 * sin(2 * 180 * 50 * t + dephasage * 3.14 / 180.0);
}
void setup() {
  Serial.begin(115200);
}
void loop() {
  static unsigned long previousPrintTime = 0;
  unsigned long currentTime = millis();
  if (currentTime - previousPrintTime >= 10) {
    double t = currentTime / 1000.0;
    previousPrintTime = currentTime;
    V[i] = Vinst(t);
    I[i] = Iinst(t);
    i++;
    if (i==N) {
     Power power(V, I , N);
     power.print();
     i=0;
    }
  }
}

