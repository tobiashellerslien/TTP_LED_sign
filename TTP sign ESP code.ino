#define TRANSISTOR 14
#define SWITCH 4

void setup() {

  pinMode(TRANSISTOR, OUTPUT);
  pinMode(SWITCH, INPUT_PULLDOWN);

  digitalWrite(TRANSISTOR, HIGH);

}

void loop() {

  if(digitalRead(SWITCH) == HIGH) {
    digitalWrite(TRANSISTOR, LOW);
    delay(500);
    digitalWrite(TRANSISTOR, HIGH);
    delay(500);
  } else {
    digitalWrite(TRANSISTOR, HIGH);
    delay(500);
  }

}
