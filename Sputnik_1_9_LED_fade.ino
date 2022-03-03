//March 2 code developed to use PWM to fade 9 of the 12 LED's which can be controlled via the PWM enabled pins on the ATTiny202 MCU
//Functions are defined that can be called upon to fade desired diodes on the board. 
//Developed as part of the Sputnik 1 project by Lachlan Van Egmond and Maxim Vasic.

int A = 0; //Sets variables equal to the Arduino definition of the ATtiny202 pins.
int B = 1;
int C = 3;
int D = 4;
int Delay =0; //Sets the variable for the delay function so it can be adjusted easier. 
//Please note that the fade functions are slower than a blink (they take 5 miliseconds to max and 5 miliseconds to min) and thus significant delay between functions which are already slow is unadvisable
void setup() //Default pin settings is low impedance OUTPUT mode.
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT); 
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT); 
}

void setLED(int pinPair) //Defines all the functions that turn on each individual LED. This is done by setting pins as INPUT effectively removing them
//from the circuit due to the high impedance state that an INPUT assignemnt creates
//and then defining the pin pair that will illuminate the desired diode and the polarity of HIGH/LOW for that pair. PLEASE NOTE: Diodes are numbered on the top side (the side with the speaker, MCU, etc.) 
//meaning that value of pinPair is NOT the value of the Diode indicated on the PCB schematic (ex. pinPair 1 turns on Diode 12
{
  if(pinPair == 1) //Turns on Diode 12
  {
                pinMode(A, INPUT);
                pinMode(B, INPUT);  // changed to input to trigger tri state.
                pinMode(C, OUTPUT);
                pinMode(D, OUTPUT);  

                //digitalWrite(D, HIGH); 
                digitalWrite(C, LOW); //Pin C kept low             

  //Fading OUTPUT D using PWM
  for(int i=0; i<255; i++){
    analogWrite(D, i); //Uses analogWrite function for the desired pin increases duty cycle to max
    delay(5);
  }

  for(int i=255; i>0; i--){
    analogWrite(D, i); //Uses analogWrite function for the desired pin decreases duty cycle to min
    delay(5);
  }}
  
  if(pinPair == 2) //Turns on Diode 11
  {
                pinMode(A, INPUT);
                pinMode(B, INPUT); 
                pinMode(C, OUTPUT);
                pinMode(D, OUTPUT);

                //digitalWrite(C, HIGH);             
                digitalWrite(D, LOW); //Pin D kept low

  //Fading the OUTPUT C using PWM
  for(int i=0; i<255; i++){
    analogWrite(C, i);
    delay(5);
  }

  for(int i=255; i>0; i--){
    analogWrite(C, i);
    delay(5);
  }}
  
  if(pinPair == 3) //Turns on Diode 7
  { 
                pinMode(A, OUTPUT);
                pinMode(B, INPUT);
                pinMode(C, OUTPUT);
                pinMode(D, INPUT);

             //digitalWrite(C,HIGH);
                digitalWrite(D, LOW);   

  //Fading OUTPUT C
  for(int i=0; i<255; i++){
    analogWrite(C, i);
    delay(5);
  }

  for(int i=255; i>0; i--){
    analogWrite(C, i);
    delay(5);
  }}
  
  if(pinPair == 4) //Turns on Diode 9 THIS IS NOT A PWM PIN DO NOT CALL THIS FUNCTION FOR PWM PURPOSES. 
  {
                pinMode(A, OUTPUT);
                pinMode(B, INPUT);
                pinMode(C, OUTPUT);
                pinMode(D, INPUT);
                
                digitalWrite(A, HIGH); //Pin 0 does not have PWM capabilities and thus cannot be used
                digitalWrite(C,LOW);
                
  }

  if(pinPair == 5) //Turns on Diode 8
  {
                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);    
                pinMode(D, OUTPUT);           

                //digitalWrite(D, HIGH);
                digitalWrite(B, LOW);

  //Fading OUTPUT D
  for(int i=0; i<255; i++){
    analogWrite(D, i);
    delay(5);
  }

  for(int i=255; i>0; i--){
    analogWrite(D, i);
    delay(5);
  }}
  
  if(pinPair == 6) //Turns on Diode 10
  {

                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
                pinMode(D, OUTPUT);  

                //digitalWrite(B, HIGH);
                digitalWrite(D, LOW);

  //Fading the LED
  for(int i=0; i<255; i++){
    analogWrite(B, i);
    delay(5);
  }

  for(int i=255; i>0; i--){
    analogWrite(B, i);
    delay(5);
  }}
  
    if(pinPair == 7) //Turns on Diode 3 THIS IS NOT A PWM PIN DO NOT CALL THIS FUNCTION FOR PWM PURPOSES
  {

               pinMode(A, OUTPUT);
                pinMode(B, INPUT);
                pinMode(C, INPUT);
                pinMode(D, OUTPUT);  

                digitalWrite(A, HIGH); //Pin 0 on the ATtiny202 does not have PWM functionality
                digitalWrite(D, LOW);
  }
  if(pinPair == 8) //Turns on Diode 2
  {

               pinMode(A, OUTPUT);
                pinMode(B, INPUT);
                pinMode(C, INPUT);
                pinMode(D, OUTPUT);  

                //digitalWrite(D, HIGH);
                digitalWrite(A, LOW);
                
  //Fading the LED
  for(int i=0; i<255; i++){
    analogWrite(D, i);
    delay(5);
  }

  for(int i=255; i>0; i--){
    analogWrite(D, i);
    delay(5);
  }}
  
   if(pinPair == 9) //Turns on Diode 5
  {

               pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);
                pinMode(D, INPUT);  

                //digitalWrite(B, HIGH);
                digitalWrite(C, LOW);

  //Fading the LED
  for(int i=0; i<255; i++){
    analogWrite(B, i);
    delay(5);
  }

  for(int i=255; i>0; i--){
    analogWrite(B, i);
    delay(5);
  }}
  
   if(pinPair == 10) //Turns on Diode 6
  {

               pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);
                pinMode(D, INPUT);  

                //digitalWrite(C, HIGH);
                digitalWrite(B, LOW);

  //Fading the LED
  for(int i=0; i<255; i++){
    analogWrite(C, i);
    delay(5);
  }

  for(int i=255; i>0; i--){
    analogWrite(C, i);
    delay(5);
  }}
  
   if(pinPair == 11) //Turns on Diode 4
  {

               pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
                pinMode(D, INPUT);  

                //digitalWrite(B, HIGH);
                digitalWrite(A, LOW);

  //Fading the LED
  for(int i=0; i<255; i++){
    analogWrite(B, i);
    delay(5);
  }

  for(int i=255; i>0; i--){
    analogWrite(B, i);
    delay(5);
  }}
  
   if(pinPair == 12) //Turns on Diode 1 THIS IS NOT A PWM PIN DO NOT CALL THIS FUNCTION FOR PWM PURPOSES
  {

               pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
                pinMode(D, INPUT);  

                digitalWrite(A, HIGH); //Pin 0 on the ATtiny202 does not have PWM
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
    //setLED(4); Function commmented out due to hardware inability to use PWM
    //delay(Delay);
    setLED(5);
    delay(Delay);
    setLED(6);
    delay(Delay);
    //setLED(7); Function commented out due to hardware inability to use PWM
    //delay(Delay);
    setLED(8);
    delay(Delay);
    setLED(9);
    delay(Delay);
    setLED(10);
    delay(Delay);
    setLED(11);
    delay(Delay);
    //setLED(12); Function commented out due to hardware inability to use PWM
    //delay(Delay);
  }
}
