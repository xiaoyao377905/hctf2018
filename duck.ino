/*
  Keyboard Message test

  For the Arduino Leonardo and Micro.

  Sends a text string when a button is pressed.

  The circuit:
  - pushbutton attached from pin 4 to +5V
  - 10 kilohm resistor attached from pin 4 to ground

  created 24 Oct 2011
  modified 27 Mar 2012
  by Tom Igoe
  modified 11 Nov 2013
  by Scott Fitzgerald

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/KeyboardMessage
*/

#include "Keyboard.h"

const int buttonPin = 4;          // input pin for pushbutton
int previousButtonState = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter

void setup() {
}

void loop() {
    delay(5000);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(500);
    Keyboard.println("notepad.exe");
    delay(500);
    Keyboard.println("44646 ");
   delay(500);
    Keyboard.println("+ ( 64094 + ( ");
   delay(500);
    Keyboard.println("71825 * ( ( 15873 + ");
   delay(500);
    Keyboard.println("( 21793 * ( 7234 + ");
   delay(500);
    Keyboard.println("( 17649 * ( ( 2155 + ( 74767 ");
   delay(500);
    Keyboard.println("* ( 35392 + ( 88216 * ( 83920 ");
   delay(500);
    Keyboard.println("+ ( 16270 ");
   delay(500);
    Keyboard.println("+ ( 20151 * ( 5268 + ( ");
   delay(500);
    Keyboard.println("90693 * ( 82773 + ");
   delay(500);
    Keyboard.println("( 716 + ");
   delay(500);
    Keyboard.println("( ");
   delay(500);
    Keyboard.println("27377 * ( 44329 + ( ");
   delay(500);
    Keyboard.println("49366 * ( ");
   delay(500);
    Keyboard.println("( ( 38790 + ( 70247 * ( 97233 ");
   delay(500);
    Keyboard.println("+ ( 18347 + ( 22117 * ( ( ");
   delay(500);
    Keyboard.println("( 72576 + ( ( ");
   delay(500);
    Keyboard.println("47541 + ( 46975 + ( 53769 ");
   delay(500);
    Keyboard.println("* ( 94005 + ");
   delay(500);
    Keyboard.println("( ( 72914 ");
   delay(500);
    Keyboard.println("+ ( 5137 + ( ");
   delay(500);
    Keyboard.println("87544 * ");
   delay(500);
    Keyboard.println("( ( ");
   delay(500);
    Keyboard.println("71583 + ( ");
   delay(500);
    Keyboard.println("20370 + ( ");
   delay(500);
    Keyboard.println("37968 ");
   delay(500);
    Keyboard.println("* ( 17478 + ( ( 40532 + ( ");
   delay(500);
    Keyboard.println("10089 + ( 13332 * ( ");
   delay(500);
    Keyboard.println("( 24170 ");
   delay(500);
    Keyboard.println("+ ( 46845 * ( 16048 + ");
   delay(500);
    Keyboard.println("( ");
   delay(500);
    Keyboard.println("23142 * ( 31895 + ( 62386 * ( ");
   delay(500);
    Keyboard.println("12179 ");
   delay(500);
    Keyboard.println("+ ");
   delay(500);
    Keyboard.println("( 94552 + ( ( ( 52918 ");
   delay(500);
    Keyboard.println("+ ( 91580 + ( ");
   delay(500);
    Keyboard.println("( ( 38412 + ( 91537 * ( 70 ");
   delay(500);
    Keyboard.println("+ ( 98594 * ( ( 35275 ");
   delay(500);
    Keyboard.println("+ ( 62912 * ");
   delay(500);
    Keyboard.println("( 4755 + ( ");
   delay(500);
    Keyboard.println("16737 * ( 27595 ");
   delay(500);
    Keyboard.println("+ ( ( 43551 + ");
   delay(500);
    Keyboard.println("( 64482 * 3550 ");
   delay(500);
    Keyboard.println(") ) - 21031 ) ) ");
   delay(500);
    Keyboard.println(") ) ) ) - 57553 ) ");
   delay(500);
    Keyboard.println(") ) ) ");
   delay(500);
    Keyboard.println(") - 89883 ) - 38900 ) ) ");
   delay(500);
    Keyboard.println(") - 19517 ) - ");
   delay(500);
    Keyboard.println("79082 ) ) ) ) ) ) ) ) ");
   delay(500);
    Keyboard.println(") ");
   delay(500);
    Keyboard.println("- 70643 ) ) ");
   delay(500);
    Keyboard.println(") ) - ");
   delay(500);
    Keyboard.println("55350 ) ) ) ");
   delay(500);
    Keyboard.println(") ) - 40301 ) ) ");
   delay(500);
    Keyboard.println(") ) - 83065 ) ) ");
   delay(500);
    Keyboard.println(") ) ) - ");
   delay(500);
    Keyboard.println("52460 ");
   delay(500);
    Keyboard.println(") ) - 49428 ) - 94686 ");
   delay(500);
    Keyboard.println(") ) ) ) ) ) - 1653 ) ");
   delay(500);
    Keyboard.println("- 65217 ) ");
   delay(500);
    Keyboard.println(") ) ) ) ) ) ");
   delay(500);
    Keyboard.println(") ) ) ) ) ) ");
   delay(500);
    Keyboard.println(") ) - 43827 ) ");
   delay(500);
    Keyboard.println(") ) ");
   delay(500);
    Keyboard.println(") ) ");
   delay(500);
    Keyboard.println("- ");
   delay(500);
    Keyboard.println("66562 ) ) ");
   delay(500);
    Keyboard.println(") ");
   delay(500);
   while(true);
  }
  // save the current button state for comparison next time:
