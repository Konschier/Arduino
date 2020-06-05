const int pinA = 13;
const int pinB = 12;
const int pinC = 11;
const int pinD = 10;
const int pinE = 9;
const int pinF = 8;
const int pinG = 7;
const int pin2A = 6;
const int pin2B = 5;
const int pin2C = 4;
const int pin2D = 3;
const int pin2E = 2;
const int pin2F = 1;
const int pin2G = 0;
int pb = A0;
int pb2 = A1;
int pb3 = A2;
int pb4 = A3;
int pb5_reset = A4;
int estado_pb = 1;
int estado_pb2 = 14;
void setup() {

pinMode (pinA, OUTPUT);
pinMode (pinB, OUTPUT);
pinMode (pinC, OUTPUT);
pinMode (pinD , OUTPUT);

pinMode (pinE, OUTPUT);
pinMode (pinF, OUTPUT);
pinMode (pinG, OUTPUT);
pinMode (pin2A, OUTPUT);
pinMode (pin2B, OUTPUT);
pinMode (pin2C, OUTPUT);
pinMode (pin2D, OUTPUT);
pinMode (pin2E, OUTPUT);
pinMode (pin2F, OUTPUT);
pinMode (pin2G, OUTPUT);
}

void loop() {
if (analogRead(pb) > 1000) {
while (analogRead(pb) > 1000);
estado_pb ++;
}
if (analogRead(pb2) > 1000) {
while (analogRead(pb2) > 1000);
estado_pb --;
}

if (analogRead(pb5_reset) > 1000) {
while (analogRead(pb5_reset) > 1000);
estado_pb = 1;
}
if (estado_pb < 0) {

estado_pb = 0;
}
if (estado_pb > 13) {
estado_pb = 13;
}
switch (estado_pb) {

case 1:
// NÚMERO 0

digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, LOW);
break;

case 2:

// NÚMERO 1

digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);

digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
break;

case 3:

// NÚMERO 2

digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, LOW);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, LOW);
digitalWrite(pinG, HIGH);
break;

case 4:

// NÚMERO 3

digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, LOW);

digitalWrite(pinF, LOW);
digitalWrite(pinG, HIGH);
break;

case 5:

// NÚMERO 4
digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
break;

case 6:

// NÚMERO 5

digitalWrite(pinA, HIGH);
digitalWrite(pinB, LOW);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);

break;

case 7 :

// NÚMERO 6

digitalWrite(pinA, HIGH);
digitalWrite(pinB, LOW);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
break;

case 8:

// NÚMERO 7

digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
break;

case 9:

// NÚMERO 8

digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
break;

case 10:

// NÚMERO 9

digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
break;

case 11:

//NÚMERO 10

digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, LOW);
digitalWrite(pinG, HIGH);
break;

case 12:

// NÚMERO 11

digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, LOW);
break;

case 13:

estado_pb == 0;
break;
}
if (analogRead(pb3) > 1000) {
while (analogRead(pb3) > 1000);
estado_pb2 ++;
}
if (analogRead(pb4) > 1000) {
while (analogRead(pb4) > 1000);
estado_pb2 --;
}
if (analogRead(pb5_reset) > 1000) {
while (analogRead(pb5_reset) > 1000);
estado_pb2 = 14;
}
if (estado_pb2 < 0) {
estado_pb2 = 0;
}
if (estado_pb2 > 26) {
estado_pb2 = 26;
}
switch (estado_pb2) {

case 14:
// NÚMERO 0

digitalWrite(pin2A, HIGH);

digitalWrite(pin2B, HIGH);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, HIGH);
digitalWrite(pin2E, HIGH);
digitalWrite(pin2F, HIGH);
digitalWrite(pin2G, LOW);
break;

case 15:

// NÚMERO 1

digitalWrite(pin2A, LOW);
digitalWrite(pin2B, HIGH);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, LOW);
digitalWrite(pin2E, LOW);
digitalWrite(pin2F, LOW);
digitalWrite(pin2G, LOW);
break;

case 16:

// NÚMERO 2

digitalWrite(pin2A, HIGH);
digitalWrite(pin2B, HIGH);

digitalWrite(pin2C, LOW);
digitalWrite(pin2D, HIGH);
digitalWrite(pin2E, HIGH);
digitalWrite(pin2F, LOW);
digitalWrite(pin2G, HIGH);
break;

case 17:

// NÚMERO 3

digitalWrite(pin2A, HIGH);
digitalWrite(pin2B, HIGH);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, HIGH);
digitalWrite(pin2E, LOW);
digitalWrite(pin2F, LOW);
digitalWrite(pin2G, HIGH);
break;

case 18:

// NÚMERO 4
digitalWrite(pin2A, LOW);
digitalWrite(pin2B, HIGH);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, LOW);

digitalWrite(pin2E, LOW);
digitalWrite(pin2F, HIGH);
digitalWrite(pin2G, HIGH);
break;

case 19:

// NÚMERO 5

digitalWrite(pin2A, HIGH);
digitalWrite(pin2B, LOW);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, HIGH);
digitalWrite(pin2E, LOW);
digitalWrite(pin2F, HIGH);
digitalWrite(pin2G, HIGH);
break;

case 20 :

// NÚMERO 6

digitalWrite(pin2A, HIGH);
digitalWrite(pin2B, LOW);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, HIGH);
digitalWrite(pin2E, HIGH);

digitalWrite(pin2F, HIGH);
digitalWrite(pin2G, HIGH);
break;

case 21:

// NÚMERO 7

digitalWrite(pin2A, HIGH);
digitalWrite(pin2B, HIGH);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, LOW);
digitalWrite(pin2E, LOW);
digitalWrite(pin2F, LOW);
digitalWrite(pin2G, LOW);
break;

case 22:

// NÚMERO 8

digitalWrite(pin2A, HIGH);
digitalWrite(pin2B, HIGH);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, HIGH);
digitalWrite(pin2E, HIGH);
digitalWrite(pin2F, HIGH);

digitalWrite(pin2G, HIGH);
break;

case 23:

// NÚMERO 9

digitalWrite(pin2A, HIGH);
digitalWrite(pin2B, HIGH);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, LOW);
digitalWrite(pin2E, LOW);
digitalWrite(pin2F, HIGH);
digitalWrite(pin2G, HIGH);
break;

case 24:

//NÚMERO 10

digitalWrite(pin2A, LOW);
digitalWrite(pin2B, HIGH);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, HIGH);
digitalWrite(pin2E, HIGH);
digitalWrite(pin2F, LOW);
digitalWrite(pin2G, HIGH);

break;

case 25:

// NÚMERO 11

digitalWrite(pin2A, LOW);
digitalWrite(pin2B, HIGH);
digitalWrite(pin2C, HIGH);
digitalWrite(pin2D, LOW);
digitalWrite(pin2E, HIGH);
digitalWrite(pin2F, HIGH);
digitalWrite(pin2G, LOW);

break;

case 26:
estado_pb2==0;

break;
}
}
