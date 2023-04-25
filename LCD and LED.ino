#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#define I2C_ADDR 0x27
#define BACKLIGHT_PIN 3
#define En_pin 2
#define Rw_pin 1
#define Rs_pin 0
#define D4_pin 4
#define D5_pin 5
#define D6_pin 6
#define D7_pin 7

LiquidCrystal_I2C
lcd(I2C_ADDR, En_pin, Rw_pin, Rs_pin, D4_pin, D5_pin, D6_pin, D7_pin);


void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
lcd.setBacklight(HIGH);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(1,0);
lcd.print(" INTERACTIVE   ");
lcd.setCursor(0,1);
lcd.print(" ROBOTIC  CLUB  ");
delay(2500);
lcd.clear();
lcd.setCursor(1,0);
lcd.print("     NAMA      ");
lcd.setCursor(0,1);
lcd.print("Okky Supit Ananda");
delay(2500);
lcd.clear();
lcd.setCursor(1,0);
lcd.print(" LAMPU MERAH   ");
lcd.setCursor(0,1);
lcd.print("   NYALAAA!!!  ");
digitalWrite(13,HIGH);
delay(3000);
digitalWrite(13,LOW);
delay(100);
lcd.clear();
lcd.setCursor(1,0);
lcd.print(" LAMPU KUNING   ");
lcd.setCursor(0,1);
lcd.print("   NYALAAA!!!  ");
digitalWrite(12,HIGH);
delay(3000);
digitalWrite(12,LOW);
lcd.clear();
delay(100);
lcd.setCursor(1,0);
lcd.print(" LAMPU HIJAU   ");
lcd.setCursor(0,1);
lcd.print("   NYALAAA!!!  ");
digitalWrite(8,HIGH);
delay(3000);
digitalWrite(8,LOW);
delay(100);
lcd.clear();
lcd.setCursor(1,0);
lcd.print("     LCD   ");
lcd.setCursor(0,1);
lcd.print("   FLIP FLOP  ");
delay(100);
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(100);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(100);
digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(100);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(100);
digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(100);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(100);
digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(100);
lcd.clear();
lcd.setCursor(1,0);
lcd.print("    FINISH   ");
lcd.setCursor(0,1);
lcd.print("     HOREE!!  ");
delay(2000);
lcd.clear();




}
