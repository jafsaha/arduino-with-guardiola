/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;
int ldr_1=3;
int ldr_2=4;
int ldr_3=5;

int piezo_1=0;
int piezo_2=1;

int nginx=10;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(ldr_1, INPUT);
  pinMode(ldr_2, INPUT);
  pinMode(ldr_3, INPUT);
  
  pinMode(piezo_1, INPUT);
  pinMode(piezo_2, INPUT);

  pinMode(nginx, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = analogRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  buttonState = analogRead(ldr_1);
  // print out the state of the button:
  Serial.println(buttonState);
  buttonState = analogRead(ldr_2);
  // print out the state of the button:
  Serial.println(buttonState);
  buttonState = analogRead(ldr_3);
  // print out the state of the button:
  Serial.println(buttonState);
  Serial.println("--------");

  buttonState = analogRead(piezo_1);
  // print out the state of the button:
  Serial.println(buttonState);
  buttonState = analogRead(piezo_2);
  // print out the state of the button:
  Serial.println(buttonState);
Serial.println("--------");
  
  delay(1000);        // delay in between reads for stability


    analogWrite(nginx, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  analogWrite(nginx, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
