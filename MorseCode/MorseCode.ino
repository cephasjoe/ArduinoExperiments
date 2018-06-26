int dotLen = 50; // length of a dot & space between parts of same letter
int dashLen = dotLen*3; // length of a dash & space between letters
int spaWord = dashLen*7; // space between words
int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
} 

void loop() {
Serial.print("H");
dot(); dot(); dot(); dot();
dash();
Serial.print("E");
dot();
dash();
Serial.print("L");
dot(); dash(); dot(); dot();
dash();
Serial.print("L");
dot(); dash(); dot(); dot();
dash();
Serial.print("O");
dash(); dash(); dash();
Serial.print(" ");
delay(spaWord);
Serial.print("W");
dot(); dash(); dash();
dash();
Serial.print("O");
dash(); dash(); dash();
dash();
Serial.print("R");
dot(); dash(); dot();
dash();
Serial.print("L");
dot(); dash(); dot(); dot();
dash();
Serial.print("D");
dash(); dot(); dot();
digitalWrite(ledPin, LOW);
Serial.println(" ");
delay(10000); 
}

void dot() {
  digitalWrite(ledPin,HIGH);
  delay(dotLen);
  digitalWrite(ledPin,LOW);
  delay(dotLen);
}

void dash() {
  digitalWrite(ledPin,HIGH);
  delay(dashLen);
  digitalWrite(ledPin,LOW);
  delay(dashLen);
}

