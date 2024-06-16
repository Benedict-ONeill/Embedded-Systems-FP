#include <Keypad.h>
#include <Key.h>

const byte ROWS = 4;
const byte COLUMNS = 4;

void setup() {
  Serial.begin(9600);


  int gameValues[16];    //each integer in this array determines how many LEDs in each section of the matrix will be lit
  for (int x = 0; x <= 15; x++)
  {
    gameValues[x] = random(1, 5);   //determine the starting arrangement of the game.
    Serial.println(gameValues[x]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
}
