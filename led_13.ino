char attentionData;
int LEDPin = 13;


void setup() {
  // put your setup code here, to run once:

pinMode(LEDPin, OUTPUT);
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:

while (Serial.available() > 0){
  attentionData = Serial.read();
}

if (attentionData >= 0 && attentionData < 30){
  digitalWrite(LEDPin, HIGH);
  delay(1000);
  digitalWrite(LEDPin, LOW);
  delay(1000);
}
if (attentionData >= 30 && attentionData < 60){
  digitalWrite(LEDPin, HIGH);
  delay(500);
  digitalWrite(LEDPin, LOW);
  delay(500);
}
if (attentionData >=60 && attentionData <= 100){
  digitalWrite(LEDPin, HIGH);
  delay(100);
  digitalWrite(LEDPin, LOW);
  delay(100);
}

}
