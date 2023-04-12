#include "PowerLib.h"
#define N 10
double I[10]={0,1,2,3,4,5,6,7,8,9};
double V[10]={0,1,2,3,4,5,6,7,8,9};
void setup() 
{
  Serial.begin(9600);
  // Create an instance of the Power class with the generated waveforms
  Power power(I, V , 10);
  // Calculate and print the power values
  power.print();
}
