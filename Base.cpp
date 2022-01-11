#include "Globals.h"

void LBfwd(int s) {
  analogWrite(lb2s, s);
  analogWrite(lb1s, s);
  
  digitalWrite(lb21, LOW);
  digitalWrite(lb22, HIGH);
  digitalWrite(lb11, LOW);//dk
  digitalWrite(lb12, HIGH);//dk
}

void LBbwd(int s) {
  analogWrite(lb2s, s);
  analogWrite(lb1s, s);

  digitalWrite(lb21, HIGH);
  digitalWrite(lb22, LOW);
  digitalWrite(lb11, HIGH);//dk
  digitalWrite(lb12, LOW);//dk
}

void RBfwd(int s) {
  analogWrite(rb2s, s);
  analogWrite(rb1s, s);

  digitalWrite(rb21, LOW);//dk
  digitalWrite(rb22, HIGH);//dk
  digitalWrite(rb11, LOW);//dk
  digitalWrite(rb12, HIGH);//dk
}

void RBbwd(int s) {
  analogWrite(rb2s, s);
  analogWrite(rb1s, s);

  digitalWrite(rb21, HIGH);//dk
  digitalWrite(rb22, LOW);//dk
  digitalWrite(rb11, HIGH);//dk
  digitalWrite(rb12, LOW);//dk
}

void baseStop(){
  digitalWrite(lb21, LOW);
  digitalWrite(lb22, LOW);
  digitalWrite(lb11, LOW);
  digitalWrite(lb12, LOW);
  digitalWrite(rb21, LOW);
  digitalWrite(rb22, LOW);
  digitalWrite(rb11, LOW);
  digitalWrite(rb12, LOW);
  
}
void base(int s) {
  if (s < 0) {
    LBbwd(abs(s));
    RBbwd(abs(s));
  }
  else {
    LBfwd(abs(s));
    RBfwd(abs(s));
  }
}

void timerBase(int s, int t) { //millisecond
  base(abs(s));
  delay(t);
  baseStop();
}
