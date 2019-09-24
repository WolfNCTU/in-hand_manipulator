/*********************************
Author: Wolf Chen
Date: 2019/09/22
Last update: 2019/09/22

PRG-100 Rotor Controller
********************************/
#define OUTPUT_PIN_1 2
#define OUTPUT_PIN_2 3

void setup(){
  Serial.begin(115200);
  pinMode(OUTPUT_PIN_1, OUTPUT);
  pinMode(OUTPUT_PIN_2, OUTPUT);
}

void loop(){
  cw_turn(5000);
  stop_turn(1000);
  ccw_turn(5000);
  stop_turn(1000);
}

void stop_turn(int time){
  digitalWrite(OUTPUT_PIN_1, LOW);
  digitalWrite(OUTPUT_PIN_2, LOW);
  delay(time);
}

void cw_turn(int time){
  digitalWrite(OUTPUT_PIN_1, HIGH);
  digitalWrite(OUTPUT_PIN_2, LOW);
  delay(time);
}

void ccw_turn(int time){
  digitalWrite(OUTPUT_PIN_1, LOW);
  digitalWrite(OUTPUT_PIN_2, HIGH);
  delay(time);
}
