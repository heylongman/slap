/*
  Arduino script for Slap (2022) - interactive installtion by Longman LUK,
  simply converts analog inputs into digital outputs.
*/

// To begin, plug your board,
// set up the "Board" and "Port" under Tools menu,
// and "Upload" the code (upper left corner).

void setup() {
  Serial.begin(115200); //the appropriate Baud rate may vary under different situations.
}

void loop() {
//  In our design, 3 piezo sensors run into analog input pin 0, 2, and 4 respectively.
  Serial.print(analogRead(A0));
  Serial.print(" ");
  Serial.print(analogRead(A2));
  Serial.print(" ");
  Serial.print(analogRead(A4));

//  TESTING:
//  analogRead() maps input voltages between 0 and the operating voltage(5V or 3.3V, the latter in our case) into integer values between 0 and 1023.
//  The idea is to minimize the noise and maximize the headroom for the widest range of sensitivity. (in our
//  This involves combining the sensor with an appropriate resistor.
//  During a test, Serial Plotter is used to examine how good the sensors are performing. (Under Tools menu, or shift + cmd + L for mac)
//  To fix the Y-axis for a clearer representation, uncomment the following 4 lines temporarily.

//  Serial.print(0);
//  Serial.print(" ");
//  Serial.print(1023);
//  Serial.print(" ");
}

/*
  web: www.longman.hk
  email: info@longman.hk
  shared under a Creative Commons Attribution-NonCommercial 4.0 International License.
*/
