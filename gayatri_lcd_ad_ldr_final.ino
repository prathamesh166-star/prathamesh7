/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(4, 5, 0, 1, 2, 3);
const int NROWS = 2;
const int NCOLS = 16;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.begin(NCOLS, NROWS); // This clears the LCD
   lcd.setCursor(1, 0); 
   lcd.print(" Automatic & ");
   lcd.setCursor(1, 1); 
   delay(2000);
   lcd.print("  Artifical  ");
   delay (2000);
   lcd.clear();
   
   lcd.setCursor(1,0);
   lcd.print(" High grouth");
   delay(2000);

  lcd.setCursor(1,1);
   lcd.print("  Vertical ");
   delay(2000);
   lcd.clear();
   lcd.setCursor(1,0);
   lcd.print("   Farming");
   delay(2000);
   lcd.setCursor(1,1);
   lcd.print("    System ");
   delay(2000);
   lcd.clear();
   lcd.setCursor(1,0);
   lcd.print("    STATUS ");
   delay(5000);
  // Print a message to the LCD.
  lcd.clear();
  lcd.print("INITIALISING");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");  
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");  
  delay(500);
}
void loop()
{
  
 int sensorValue = analogRead(A0);
 double dV = sensorValue;
 double le = (dV/1023)*100;
 int level = le;
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("LIGHT LEVEL:");
 lcd.print(level);
 lcd.print("%");
 lcd.setCursor(0, 1);
  
 if ((level >= 0) && (level <= 5))
 { 
  lcd.print("VERY DARK"); 
 }
 else if ((level > 5) && (level <= 10))
 {
  lcd.print("DARK"); 
 }
 else if ((level > 10) && (level <= 50))
 {
  lcd.print("BRIGHT"); 
 }
 else
 {
  lcd.print("VERY BRIGHT"); 
 }
  
 delay(500); 
}

