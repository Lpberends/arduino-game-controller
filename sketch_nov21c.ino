#include <Keyboard.h>

const int LeftButton = 11;
const int RightButton = 12;
void setup(){
   pinMode(LeftButton, INPUT);
   pinMode(RightButton, INPUT);
   Keyboard.begin();
} 
void loop()
{
  if(digitalRead(LeftButton) == HIGH){
  Keyboard.press(97);
  delay(100);
   }
if(digitalRead(RightButton) == HIGH){
  Keyboard.press(100);
  delay(100);
   }
if(digitalRead(11) == LOW){
  Keyboard.release(97);
   }
if(digitalRead(12) == LOW){
  Keyboard.release(100);
} 
