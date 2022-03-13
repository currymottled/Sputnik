

//By Lachlan Van Egmond
int buzzerPin = 4; //Which is the pin on the Attiny202 that controls the buzzer and at this point some of the lights (which will be fixed in version 2.0 of the Sputnik)

int buzzerPitch = 3000; //value of the pitch for the tone function during deincrement beeps

void setup() {

tone(buzzerPin, buzzerPitch ); //time incremented 
  delay(1000);
  noTone(buzzerPin);
  delay(1000);
  tone(buzzerPin, buzzerPitch );
  delay(900);
  noTone(buzzerPin);
  delay(900);
  tone(buzzerPin, buzzerPitch );
  delay(800);
  noTone(buzzerPin);
  delay(800);
  tone(buzzerPin, buzzerPitch );
  delay(700);
  noTone(buzzerPin);
  delay(700);
  tone(buzzerPin, buzzerPitch );
  delay(600);
  noTone(buzzerPin);
  delay(600);
  tone(buzzerPin, buzzerPitch );
  delay(500);
  noTone(buzzerPin);
  delay(500);
  tone(buzzerPin, buzzerPitch );
  delay(400);
  noTone(buzzerPin);
  delay(400);
  tone(buzzerPin, buzzerPitch );
  delay(300);
  noTone(buzzerPin);
  delay(300);
  tone(buzzerPin, buzzerPitch );
  delay(200);
  noTone(buzzerPin);
  delay(200);
  tone(buzzerPin, buzzerPitch );
  delay(100);
  noTone(buzzerPin);
  delay(100);
  tone(buzzerPin, buzzerPitch );
  delay(50);
  noTone(buzzerPin);
  delay(50);
  tone(buzzerPin, buzzerPitch );
  delay(25);
  noTone(buzzerPin);
  delay(25);
  tone(buzzerPin, buzzerPitch );
  delay(10);
  noTone(buzzerPin);
  delay(10);
  tone(buzzerPin, buzzerPitch );
  delay(5);
  noTone(buzzerPin);
  delay(5);
  tone(buzzerPin, buzzerPitch );
  delay(2.5);
  noTone(buzzerPin);
  delay(2.5);
  tone(buzzerPin, buzzerPitch );
  delay(1);
//  noTone(buzzerPin, buzzerPitch);
  //delay(1);


}

void loop() {

  tone(buzzerPin, 3500 ); // end frequency
  delay(6000);

 }
