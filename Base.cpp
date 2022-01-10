#include "Globals.h"

void LBfwd(int s) {
  analogWrite(lb3s, s);
  analogWrite(lb2s, s);
  analogWrite(lb1s, s);

  digitalWrite(lb31, HIGH);
  digitalWrite(lb32, LOW);
  digitalWrite(lb21, HIGH);
  digitalWrite(lb21, LOW);
  digitalWrite(lb11, HIGH);
  digitalWrite(lb12, LOW);
}

void LBbwd(int s) {
  analogWrite(lb3s, s);
  analogWrite(lb2s, s);
  analogWrite(lb1s, s);

  digitalWrite(lb31, LOW);
  digitalWrite(lb32, HIGH);
  digitalWrite(lb21, LOW);
  digitalWrite(lb21, HIGH);
  digitalWrite(lb11, LOW);
  digitalWrite(lb12, HIGH);
}

void RBfwd(int s) {
  analogWrite(rb3s, s);
  analogWrite(rb2s, s);
  analogWrite(rb1s, s);

  digitalWrite(rb31, HIGH);
  digitalWrite(rb32, LOW);
  digitalWrite(rb21, HIGH);
  digitalWrite(rb22, LOW);
  digitalWrite(rb11, HIGH);
  digitalWrite(rb12, LOW);
}

void RBbwd(int s) {
  analogWrite(rb3s, s);
  analogWrite(rb2s, s);
  analogWrite(rb1s, s);

  digitalWrite(rb31, LOW);
  digitalWrite(rb32, HIGH);
  digitalWrite(rb21, LOW);
  digitalWrite(rb22, HIGH);
  digitalWrite(rb11, LOW);
  digitalWrite(rb12, HIGH);
}

void baseStop(){
  digitalWrite(lb31, LOW);
  digitalWrite(lb32, LOW);
  digitalWrite(lb21, LOW);
  digitalWrite(lb22, LOW);
  digitalWrite(lb11, LOW);
  digitalWrite(lb12, LOW);
  digitalWrite(rb31, LOW);
  digitalWrite(rb32, LOW);
  digitalWrite(rb21, LOW);
  digitalWrite(rb22, LOW);
  digitalWrite(rb11, LOW);
  digitalWrite(rb12, LOW);
  
}
void base(int s) {
  if (s < 0) {
    LBbwd(s);
    RBbwd(s);
  }
  else {
    LBfwd(s);
    RBfwd(s);
  }
}

void timerBase(int s, int t) { //millisecond
  base(s);
  delay(t);
  baseStop();
}
