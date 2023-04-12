# PowerMonitor

# Initialise 
```ino     
  Power power(I, V , N); 
  // I, V and N should be predefined 
```  

| Methode | return |
| --- | ----------- |
| iEff() | The effective value of the current I |
| vEff() | The effective value of the voltage V |
| iMoy() | The mean value of the current I |
| vMoy() | The mean value of the voltage V |
| P() | The active power (in watts) of the circuit |
| Q() | The reactive power (in volt-ampere-reactive or VAR) of the circuit|
| S() | The apparent power (in volt-ampere or VA) of the circuit.|
| pf() | The power factor of the circuit |
| Req() | The equivalent resistance of the circuit |
| Req() | The equivalent resistance of the circuit |
| Zeq() | The equivalent impedance of the circuit |

| Methode | arguments | Description |
| --- | ------------- |-----------------|
| print()|-------------------------|print the different factors of the circuit |
| push() | i : double , v : double | Adds a new value to the I and V arrays. |
