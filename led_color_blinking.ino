#define LED1 RED_LED
#define LED2 BLUE_LED
#define LED3 GREEN_LED

//see pins_energia.h for more LED definitions
//#define LED GREEN_LED
  
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(LED1, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second

  digitalWrite(LED2, HIGH);
  delay(1000);             
  digitalWrite(LED2, LOW); 
  delay(1000); 

  digitalWrite(LED3, HIGH);
  delay(1000);             
  digitalWrite(LED3, LOW); 
  delay(1000); 
}
