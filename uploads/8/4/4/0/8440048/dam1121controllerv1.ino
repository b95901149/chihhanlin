#include <LiquidCrystal.h>
//lcd (RS, EN, D4, D5, D6, D7)
LiquidCrystal lcd(35, 37, 39, 41, 43, 45);
String Str; String StrEcho; String volumeLCD;
int volume=0; int volumeReg=80; //initial -80dB
int FSet[4]= {46,48,50,52}; // green,yellow,orange,red
int relayVoltage[4] = {47, 49, 51, 53};
int filterSelect = 4; int filterSelectReg = 4; // intial Filter = F5
int polarity = 1; int polarityReg = 1; //inital polarity = Normal 
int batteryStatus = 0; //inital batteryStatus: AC-LDO
int inputSelect = 0; int inputSelectReg = 0; //initial inputSelect: USB
//LCD character
byte ldoSymbol[8] = {
	0b11111,
	0b11011,
	0b11011,
	0b11111,
	0b11111,
	0b11111,
	0b10101,
	0b10101
};
byte batterySymbol[8] = {
	0b01110,
	0b11111,
	0b10001,
	0b10011,
	0b10111,
	0b11111,
	0b11111,
	0b11111
};



void setup() {
Serial1.begin(115200); //DAM1121 baud rate
analogReadResolution(12);

//lcd initialized
lcd.begin(16, 2);
lcd.createChar(0, ldoSymbol);
lcd.createChar(1, batterySymbol);
analogWrite(DAC0, 60); //set V0, 5V ver->60
lcd.setCursor(0, 0);lcd.print("F5: mixed  ");
lcd.setCursor(10, 0);lcd.print("PN");
//lcd.setCursor(9, 0); lcd.write(byte(0)); lcd.setCursor(10, 0); lcd.print("AC-LDO");
lcd.setCursor(13, 0); lcd.print("AC");lcd.setCursor(15, 0);  lcd.write(byte(0));
lcd.setCursor(0, 1);lcd.print("Vol:-80dB");
lcd.setCursor(11, 1);lcd.print(" USB ");  
//DIO initialized
for (int i=0; i<4; i++){pinMode(FSet[i],INPUT); digitalWrite(FSet[i],HIGH);}
for (int i=0; i<4; i++){pinMode(relayVoltage[i],OUTPUT); digitalWrite(relayVoltage[i],LOW);}
}

void loop() {
  
//power input selection
if (analogRead(A1)>2600){
  for (int i =0; i<4; i++) {digitalWrite(relayVoltage[i],HIGH);}
  lcd.setCursor(13, 0); lcd.print("BA");  lcd.setCursor(15, 0); lcd.write(byte(1));
}
else {
  for (int i =0; i<4; i++) {digitalWrite(relayVoltage[i],LOW);}
  lcd.setCursor(13, 0); lcd.print("AC"); lcd.setCursor(15, 0);  lcd.write(byte(0));
}

//filter selection
filterSelect = !digitalRead(FSet[0])*8+!digitalRead(FSet[1])*4+!digitalRead(FSet[2])*2+!digitalRead(FSet[3]);
// 1: B position, 2:A position, 12:A+B position & off position  
//delay (100); StrEcho = Serial1.readStringUntil('\n'); Serial.println(StrEcho); //add to the end of case for diagnostic
if (filterSelect != filterSelectReg){
  switch (filterSelect){
  case 1: setFilter("F7"," soft   "); break; // B position, F7, soft  
  case 2: setFilter("F6"," min    "); break;// A position, F6, min
  case 4: setFilter("F5"," mixed  "); break;// OFF position, F5, mixed
  case 8: setFilter("F4"," linear "); break;// A+B position, F4, linear
  default: setFilter("F5"," mixed  "); break;// button fail, set F5, mixed
  }
}
//polarity selection
//if (analogRead(A0)<500){polarity = 0;} else {polarity =1;}
//if (polarity != polarityReg){
//  switch (polarity){
//  case 0:
//  Serial1.println("PI"); StrEcho = Serial1.readStringUntil('\n');  
//  lcd.setCursor(10, 0);lcd.print(StrEcho); lcd.setCursor(12, 0); lcd.print(" "); break; 
//  case 1:
//  Serial1.println("PN"); StrEcho = Serial1.readStringUntil('\n');  
//  lcd.setCursor(10, 0);lcd.print(StrEcho); lcd.setCursor(12, 0); lcd.print(" "); break; 
//  }
//}

//input Selection
int inputSelectVR = analogRead(A2);
if (inputSelectVR> 500){inputSelect = 0;} //USB
else {inputSelect = 1;} //COAX

if (inputSelect != inputSelectReg){
  switch (inputSelect){
  case 0:
  Serial1.println("I0"); StrEcho = Serial1.readStringUntil('\n');  
  lcd.setCursor(11, 1); lcd.print(" USB "); break; 
  case 1:
  Serial1.println("I1"); StrEcho = Serial1.readStringUntil('\n');  
  lcd.setCursor(11, 1);lcd.print("SPDIF"); break; 
  case 3:
  Serial1.println("I3"); StrEcho = Serial1.readStringUntil('\n'); //not used  
  lcd.setCursor(11, 1);lcd.print("AUTO");  break; 
  }
}

// volume Setting
int volume = map(analogRead(A0),100,2000,80,0);
volume = constrain(volume, 0, 80);
int volumeDiff = volume-volumeReg;

//diff > 1, volume+
if (volumeDiff>1){
  for (int i=volumeReg; i<=volume; i++){  
    String Volume = String(i, DEC);  
    Serial1.print("V-");
    Serial1.println(Volume);
    StrEcho = Serial1.readStringUntil('\n');volumeLCD = StrEcho.substring(1,4); //ex. V-02 to 02 
    lcd.setCursor(4, 1);lcd.print(volumeLCD);
    delay(3);
   // Serial.println(StrEcho);  
  }
 //diff <1, volume-
}else if (volumeDiff<-1){
  for (int i=volumeReg; i>=volume; i--){  
    String Volume = String(i, DEC);  
    Serial1.print("V-");
    Serial1.println(Volume);
    StrEcho = Serial1.readStringUntil('\n'); volumeLCD = StrEcho.substring(1,4); //ex. V-02 to 02 
    lcd.setCursor(4, 1);lcd.print(volumeLCD);
    delay(3);
   // Serial.println(StrEcho);  
  }  
}

// manual test
//if(Serial.available()){
//  Str = Serial.readStringUntil('\n');
//  Serial1.println(Str);  
//  StrEcho = Serial1.readStringUntil('\n');
//  Serial.println(StrEcho);  
//}

volumeReg = volume;
filterSelectReg = filterSelect;
polarityReg = polarity;
inputSelectReg = inputSelect;
StrEcho = Serial1.readStringUntil('\n'); //Serial.println(StrEcho);
//delay(50);
}

void setFilter (String cmd, String lcdStr) {
Serial1.println(cmd); StrEcho = Serial1.readStringUntil('\n');  
lcd.setCursor(0, 0);lcd.print(StrEcho);lcd.setCursor(2, 0);lcd.print(lcdStr); }
