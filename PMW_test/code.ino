const int pin_led = 6;

const int pin_potentiometer = A0;
int pot_value = 0;


void setup() {
  pinMode(pin_led, OUTPUT); 

  Serial.begin(9600);
}

void loop() {
  pot_value = analogRead(pin_potentiometer) / 4;

  analogWrite(pin_led, pot_value);

  Serial.println(pot_value);
}
