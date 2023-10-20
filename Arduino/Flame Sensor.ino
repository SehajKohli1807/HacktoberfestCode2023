Arduino Flame Sensor
const int buzzer Pin = 12;
const int flame Pin = 11;
int Flame HIGH;
int redled 5;
int greenled = 6;
void setup()
pinMode (buzzerPin, OUTPUT);
pinMode (redled, OUTPUT);
pinMode (greenled, OUTPUT);
pinMode (flame Pin, INPUT); Serial.begin(9600);
}
void loop()
Flame = digitalRead(flame Pin); if (Flame LOW)
digitalWrite(buzzerPin, HIGH);
digitalWrite(redled, HIGH);
digitalWrite(greenled, LOW);
else
digitalWrite(buzzer Pin, LOW); digitalWrite(greenled, HIGH);
digitalWrite(redled, LOW);
