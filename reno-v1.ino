const int r6 = 13;
const int r5 = 12;
const int r4 = 14;
const int r3 = 27;
const int r2 = 26;
const int r1 = 25;

 int c1;
 int c3;
 int c5;
 int c1old = 2;
 int c3old = 2;
 int c5old = 2;

int first = 1;

void setup() {
  int one = 1;

 delay(50);
 Serial.begin(115200);
 Serial.println("Port test");
 
}

void loop() {
 pinMode(r1, OUTPUT);
 pinMode(r3, OUTPUT);
 pinMode(r5, OUTPUT);
 pinMode(r2, INPUT_PULLUP);
 pinMode(r4, INPUT_PULLUP); 
 pinMode(r6, INPUT_PULLUP);

digitalWrite(r1, LOW);

delay(50);
if(digitalRead(r1) == 0) {
if((digitalRead(r4)) == 0) {
  Serial.println("Mute");
}
if((digitalRead(r6)) == 0) {
  Serial.println("VOL+");
}
digitalWrite(r1, HIGH);
}
delay(50);

 digitalWrite(r3, LOW);


if(digitalRead(r3) ==0) {
if((digitalRead(r4)) == 0) {
  Serial.println("SL");
}
if((digitalRead(r6)) == 0) {
  Serial.println("VOL-");
}
}
digitalWrite(r3, HIGH);
delay(50);

 digitalWrite(r5, LOW);

delay(50);
if(digitalRead(r5) ==0) {
if((digitalRead(r4)) == 0) {
  Serial.println("SR");
}
//if((digitalRead(r6)) == 0) {
//  Serial.println("Shift");
//}
digitalWrite(r5, HIGH);

}
pinMode(r5, INPUT_PULLUP);
pinMode(r6, OUTPUT);
delay(50);
digitalWrite(r6, LOW);

if((digitalRead(r5)) == 0) {
 Serial.println("Shift5");
 }
if((digitalRead(r2)) == 0) {
 Serial.println("Shift2");
 }
 
digitalWrite(r6, HIGH);


delay(50);

 
 //Encoder
 pinMode(r1, INPUT_PULLUP);
 pinMode(r3, INPUT_PULLUP);
 pinMode(r5, INPUT_PULLUP);
 pinMode(r2, OUTPUT);
 pinMode(r4, OUTPUT);
 pinMode(r6, OUTPUT);
 delay(50);
 digitalWrite(r2, LOW);
 delay(10);

 c1 = digitalRead(r1);
 c3 = digitalRead(r3);
 c5 = digitalRead(r5);
 
 Serial.print("RAW_R1=");
 Serial.println((r1));
 Serial.print("RAW_R3=");
 Serial.println((r3));
 Serial.print("RAW_R5=");
 Serial.println((r5));
 
if(c1 == 0) { 
  if(c1 != c1old) {
    Serial.println("if c1");
    if (c3old = 0) {
       Serial.println("UP");
       }
    if (c5old = 0) {
       Serial.println("Down");
       }
   }
}

if(c3 == 0) {
  if(c3 != c3old) {
    Serial.println("if c3");
    if (c1old = 0) {
       Serial.println("Down");
       }
    if (c3old = 0) {
       Serial.println("UP");
       }
    }
 }

 if(c5 == 0) {
   if(c5 != c5old) {
     Serial.println("if c5");
     if (c3old = 0) {
        Serial.println("UP");
     }
     if (c5old = 0) {
        Serial.println("Down");
     }
   }
 }
 
c1old = c1;
c3old = c3;
c5old = c5;
 
Serial.print("OLD_R1=");
Serial.println((c1old));
Serial.print("OLD_R3=");
Serial.println((c3old));
Serial.print("OLD_R5=");
Serial.println((c5old));
 
 delay(500);

}
