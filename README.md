# PowerMonitor 
 
# Initialise   
```ino     
  Power power(I, V , N); 
  // I, V and N should be predefined 
```  

| Methode | return |
| --- | ----------- |
| `iEff()` | The effective value of the current I |
| `vEff()` | The effective value of the voltage V |
| `iMoy()` | The mean value of the current I |
| `vMoy()` | The mean value of the voltage V |
| `P()` | The active power (in watts) of the circuit |
| `Q()` | The reactive power (in volt-ampere-reactive or VAR) of the circuit|
| `S()` | The apparent power (in volt-ampere or VA) of the circuit.|
| `pf()` | The power factor of the circuit |
| `Req()` | The equivalent resistance of the circuit |
| `Xeq()` | The equivalent reactance of the circuit |
| `Zeq()` | The equivalent impedance of the circuit |

| Methode | arguments | Description |
| --- | ------------- |-----------------|
| `print()`|-------------------------|print the different factors of the circuit |
| `push()` | i : double , v : double | Adds a new value to the I and V arrays. |




<svg width="100" height="100" xmlns="http://www.w3.org/2000/svg">
  <!-- Create a circle element -->
  <circle cx="50" cy="50" r="40" fill="blue">
    <!-- Add an animation to the circle -->
    <animateTransform
      attributeName="transform"
      attributeType="XML"
      type="rotate"
      from="0 50 50"
      to="360 50 50"
      dur="3s"
      repeatCount="indefinite"  <!-- Make the animation repeat indefinitely -->
    />
  </circle>
</svg>
