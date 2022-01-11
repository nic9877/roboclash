#include "Globals.h"

void intake(int s) {
  analogWrite(intakes, abs(s));

  if(s < 0) {
    digitalWrite(intake1, HIGH);
    digitalWrite(intake2, LOW);
  }
  else{
    digitalWrite(intake1, LOW);
    digitalWrite(intake2, HIGH     );
  }
}

void intakeStop() {
  digitalWrite(intake1, LOW);
  digitalWrite(intake2, LOW);
}

void shooter(int s){
  analogWrite(shooters, abs(s));

  if(s < 0) {
    digitalWrite(shooter1, LOW);
    digitalWrite(shooter2, HIGH);
  }
  else{
    digitalWrite(shooter1, HIGH);
    digitalWrite(shooter2, LOW);
  }
}

void shooterStop() {
  digitalWrite(shooter1, LOW);
  digitalWrite(shooter2, LOW);
}

void roller(int s){
  analogWrite(lrollers, abs(s));
  analogWrite(rrollers, abs(s));

  if(s < 0) {
    digitalWrite(lroller1, HIGH);
    digitalWrite(lroller2, LOW);
    digitalWrite(rroller1, LOW);
    digitalWrite(rroller2, HIGH);
  }
  else {
    digitalWrite(lroller1, LOW);
    digitalWrite(lroller2, HIGH);
    digitalWrite(rroller1, HIGH);
    digitalWrite(rroller2, LOW);
  }
}

void rollerStop(){
  digitalWrite(lroller1, LOW);
  digitalWrite(lroller2, LOW);
  digitalWrite(rroller1, LOW);
  digitalWrite(rroller2, LOW);
}

void mechStop(){
  intakeStop();
  shooterStop();
  rollerStop();
}

void setMech(int i, int s, int r){
  intake(i);
  shooter(s);
  roller(r);
}

void setMech(int i, int s, int r, int t){
  setMech(i, s, r);
  delay(t);
  mechStop();
}
