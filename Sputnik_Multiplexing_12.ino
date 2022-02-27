

// Feb 26th 2022 initial sketch for the Sputnik 1 testing the multiplexing of the on board LED's. ATtiny202 pins are given letter assignments stored in varibles which are then built into sequences 
//that can be called upon to turn on desired diodes on the board. 
//Developed as part of the Sputnik 1 project by Lachlan Van Egmond and Maxim Vasic.

int A = 0; //Sets variables equal to the Arduino definition of the ATtiny202 pins.
int B = 1;
int C = 3;
int D = 4;
int Delay =1; //Sets the variable for the delay function so it can be adjusted easier.
void setup() //Default pin settings is low impedance OUTPUT mode.
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT); 
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT); 
}

void setLED(int pinPair) //Defines all the functions that turn on each individual LED. This is done by setting pins as INPUT effectively removing them
//from the circuit due to the high impedance state that an INPUT assignemnt creates
//and then defining the pin pair that will illuminate the desired diode and the polarity of HIGH/LOW for that pair
{
  if(pinPair == 1) //Turns on Diode 12
  {
                pinMode(A, INPUT);
                pinMode(B, INPUT);  // changed to input to trigger tri state.
                pinMode(C, OUTPUT);
                pinMode(D, OUTPUT);  
  
                digitalWrite(D, HIGH);             
                digitalWrite(C, LOW);
  }
  if(pinPair == 2) //Turns on Diode 11
  {
                pinMode(A, INPUT);
                pinMode(B, INPUT); 
                pinMode(C, OUTPUT);
                pinMode(D, OUTPUT);
                
                digitalWrite(C, HIGH);             
                digitalWrite(D, LOW);
  }
  if(pinPair == 3) //Turns on Diode 7
  { 
                pinMode(A, OUTPUT);
                pinMode(B, INPUT);
                pinMode(C, OUTPUT);
                pinMode(D, INPUT);
             
                 digitalWrite(C, HIGH);
                 digitalWrite(D, LOW);        
  }
  if(pinPair == 4) //Turns on Diode 9
  {
                pinMode(A, OUTPUT);
                pinMode(B, INPUT);
                pinMode(C, OUTPUT);
                pinMode(D, INPUT);
                
                digitalWrite(A, HIGH);
                digitalWrite(C,LOW);
  }

  if(pinPair == 5) //Turns on Diode 8
  {
                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);    
                pinMode(D, OUTPUT);           

                digitalWrite(D, HIGH);
                digitalWrite(B, LOW);
  }
  if(pinPair == 6) //Turns on Diode 10
  {

                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
                pinMode(D, OUTPUT);  

                digitalWrite(B, HIGH);
                digitalWrite(D, LOW);
  }
    if(pinPair == 7) //Turns on Diode 3
  {

               pinMode(A, OUTPUT);
                pinMode(B, INPUT);
                pinMode(C, INPUT);
                pinMode(D, OUTPUT);  

                digitalWrite(A, HIGH);
                digitalWrite(D, LOW);
  }
  if(pinPair == 8) //Turns on Diode 2
  {

               pinMode(A, OUTPUT);
                pinMode(B, INPUT);
                pinMode(C, INPUT);
                pinMode(D, OUTPUT);  

                digitalWrite(D, HIGH);
                digitalWrite(A, LOW);
  }
   if(pinPair == 9) //Turns on Diode 5
  {

               pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);
                pinMode(D, INPUT);  

                digitalWrite(B, HIGH);
                digitalWrite(C, LOW);
  }
   if(pinPair == 10) //Turns on Diode 6
  {

               pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);
                pinMode(D, INPUT);  

                digitalWrite(C, HIGH);
                digitalWrite(B, LOW);
  }
   if(pinPair == 11) //Turns on Diode 4
  {

               pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
                pinMode(D, INPUT);  

                digitalWrite(B, HIGH);
                digitalWrite(A, LOW);
  }
   if(pinPair == 12) //Turns on Diode 1
  {

               pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
                pinMode(D, INPUT);  

                digitalWrite(A, HIGH);
                digitalWrite(B, LOW);
  }
}

void loop() //Cycles through the desired sequence of the above sequences of pin definitions and HIGH/LOW settings
{

  {
    setLED(1);
    delay(Delay);
    setLED(2);
    delay(Delay);
    setLED(3);
    delay(Delay);
    setLED(4);
    delay(Delay);
    setLED(5);
    delay(Delay);
    setLED(6);
    delay(Delay);
    setLED(7);
    delay(Delay);
    setLED(8);
    delay(Delay);
    setLED(9);
    delay(Delay);
    setLED(10);
    delay(Delay);
    setLED(11);
    delay(Delay);
    setLED(12);
    delay(Delay);
  }
}
