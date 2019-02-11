/* How to use a Force sensitive resistor to fade an LED with Arduino
   More info: http://www.ardumotive.com/how-to-use-a-force-sensitive-resistor-en.html 
   Dev: Michalis Vasilakis // Date: 22/9/2015 // www.ardumotive.com  */
   
#include <Servo.h>
//Constants:
const int sensorPin = A0; //pin A0 to read analog input

//Variables:
int value; //save analog value
Servo servo;

void setup(){
 
  Serial.begin(9600);       //Begin serial communication
  servo.attach(3);
}

void loop(){
  
  value = analogRead(sensorPin);       //Read and save analog value from potentiometer
  Serial.println(value);               //Print value
  if (value >= 10) {
    servo.write(0);
  }
  else {
    servo.write(180);
  }
//  value = map(value, 0, 1023, 0, 255); //Map value 0-1023 to 0-255 (PWM)
 // analogWrite(ledPin, value);          //Send PWM value to led

  
}

