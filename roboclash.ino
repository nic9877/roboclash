#include "Globals.h"

void s(char n1, char n2, char n3, char n4, char n5, char n6) {
  pinMode(n1, OUTPUT);
  pinMode(n2, OUTPUT);
  pinMode(n3, OUTPUT);
  pinMode(n4, OUTPUT);
  pinMode(n5, OUTPUT);
  pinMode(n6, OUTPUT);
}

void setup() {
  // put your setup code here, to run once:
  s(intakes, intake1, intake2, shooters, shooter1, shooter2);
  s(lrollers, lroller1, lroller2, rrollers, rroller1, rroller2);
  s(lb2s, lb21, lb22, rb2s, rb21, rb22);
  s(lb1s, lb11, lb12, rb1s, rb11, rb12);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  /*when rb31 HIGH, rb32 LOW motor doesnt run, but runs when opp
   * rb2 and lb3 dont work
   * rb1 and lb1 dont work
   * shooter doesnt work
   */
//   base(255);

//   setMech(0,0,0);
}
