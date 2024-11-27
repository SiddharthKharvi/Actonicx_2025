#define Motor 9
String recievedData = "";

int Speed = 0; // 0, 50, 150, 250
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    recievedData = Serial.readString();
    if (recievedData == "STOP") {
      Speed = 0;
    }
    if (recievedData == "MEDIUM") {
      Speed = 50;
    }
    if (recievedData == "HIGH") {
      Speed = 150;
    }
    if (recievedData == "SLOW" || recievedData == "START") {
      Speed = 250;
    }
    analogWrite(9, Speed);
  }
  delay(10);
}
