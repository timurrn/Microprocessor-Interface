#include <Arduino.h>
char angka=0;
int c = 6;
int d = 7;
int e = 8;
int b = 9;
int a = 10;
int f = 11;
int g = 12;
#define s1 digitalRead(13)
#define s2 digitalRead(5)

void setup() {
  
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode (13,INPUT_PULLUP);
  pinMode (5, INPUT_PULLUP);
  
}
void tampilkan_angka (void){
  if (angka==0) {
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,LOW);
  
  }
  if (angka==1){ 
  digitalWrite (a,LOW);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
  }
  if (angka==2) {
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,LOW);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,LOW);
  digitalWrite (g,HIGH);
  
  }
  if (angka==3) {
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,HIGH);
  
  }
  if (angka==4){ 
  digitalWrite (a,LOW);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  
  }
  if (angka==5){ 
  digitalWrite (a,HIGH);
  digitalWrite (b,LOW);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,LOW);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  
  }
  if (angka==6) { 
  digitalWrite (a,HIGH);
  digitalWrite (b,LOW);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  
  }
  if (angka==7) { 
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
  }
  if (angka==8) { 
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  
  }
  if (angka==9)  { 
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,LOW);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  
  }
}


void loop () {
tampilkan_angka();
if (s1==0){
tampilkan_angka();
angka++;
delay (400);
}
if (s2==0){
tampilkan_angka();
angka--;
delay (400);
}}

//if (angka>9) {
  //angka=9;

//if (angka<0) {
 // angka=0;
//}}










