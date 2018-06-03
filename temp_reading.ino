// use grove temperature sensor to read surrounding temperature
#include <math.h>
#define LED1 RED_LED
#define LED2 BLUE_LED
#define LED3 GREEN_LED
#define sig A7
const int B=2758;                 // B value of the thermistor
const int R0 = 100000;            // R0 = 100k

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(9600);             // begin serial communication. 9600 bits per second between computer and board
  pinMode(sig, INPUT);
}


void loop() {
  //int reading = analogRead(sig);
  int a=analogRead(sig);
  float resistance=(float)(1023-a)*10000/a; //get the resistance of the sensor;
  float temperature=1/(log(resistance/10000)/B+1/298.15)-273.15;//convert to temperature via datasheet&nbsp;
  Serial.print("Current temperature is ");
  Serial.println(temperature);
  
  if (temperature <= 28)
{
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  delay(1000);
}
else if (temperature > 28 && temperature <= 29)
{
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
  delay(1000);
}
else
{
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  delay(1000);
}
}
