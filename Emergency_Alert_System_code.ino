#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
int trigPin = 9;
int led=13;
int echoPin=10;
SoftwareSerial mySerial(11, 12);

const int rs=12, en =11, d4 = 5, d5 = 4 ,d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16, 2);
  
}



void loop()

{
  long duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);

  

  if ((distance <= 10))
  {
    digitalWrite(led, HIGH);
    mySerial.begin(9600);
    delay(1000);
    mySerial.println("ATD+911234567890;");
    Serial.println("Calling through GSM Modem");
    delay(1000);
    lcd.begin(16, 2);
    lcd.print("calling help!");
    lcd.setCursor( 0, 1);
    lcd.print(millis() / 1000);
    delay(1000);
  }
  else if (distance > 10)
  {
    digitalWrite(led, LOW);
  }
}
