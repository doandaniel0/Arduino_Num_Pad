 

#include <Keyboard.h>
#define KEY_NUM_LOCK 219 //num lock
//---------------------------------------------------------
//                           Setup
//---------------------------------------------------------


void setup() {

  pinMode(0, INPUT_PULLUP); //0
  pinMode(1, INPUT_PULLUP); //1
  pinMode(2, INPUT_PULLUP); //2
  pinMode(3, INPUT_PULLUP); // sets pin 3 to input & pulls it high w/ internal resistor
  pinMode(4, INPUT_PULLUP); // sets pin 4 to input & pulls it high w/ internal resistor
  pinMode(5, INPUT_PULLUP); // sets pin 5 to input & pulls it high w/ internal resistor
  pinMode(6, INPUT_PULLUP); //6
  pinMode(7, INPUT_PULLUP); //7
  pinMode(8, INPUT_PULLUP); //8
  pinMode(9, INPUT_PULLUP); //9
  pinMode(10, INPUT_PULLUP); //.
  pinMode(16, INPUT_PULLUP); //enter

  Serial.begin(9600);       // begin serial comms for debugging

}

//---------------------------------------------------------
//                           Loop
//---------------------------------------------------------
void loop() {
  Keyboard.begin();         //begin keyboard
  if (digitalRead(0) == 0)  // scans every switch to see if its pressed    //0
  {
    Keyboard.write('0');  // send single character '0'
    delay(120);           // delay so it doesn't just spam the character
  }
  else if (digitalRead(1) == 0) {
    Keyboard.write('1');          //1
    delay(120);
  }
  else if (digitalRead(2) == 0) { //2
    Keyboard.write('2');
    delay(120);
  }
  else if (digitalRead(3) == 0) { //3
    Keyboard.write('3');
    delay(120);
  }
  else if (digitalRead(4) == 0) { //4
    Keyboard.write('4');
    delay(120);
  }
  else if (digitalRead(5) == 0) { //5
    Keyboard.write('5');
    delay(120);
  }
  else if (digitalRead(6) == 0) { //6
    Keyboard.write('6');
    delay(120);
  }
  else if (digitalRead(7) == 0) { //7
    Keyboard.write('7');
    delay(120);
  }
  else if (digitalRead(8) == 0) { //8
    Keyboard.write('8');
    delay(120);
  }
  else if (digitalRead(9) == 0) { //9
    Keyboard.write('9');
    delay(120);
  }

  else if (digitalRead(10) == 0) { //.
    Keyboard.write('.');
    delay(120);
  }

  else if (digitalRead(16) == 0) { //
    Keyboard.write(0xB0);         // send Hex value for RETURN key
    delay(200);
  }

  else if (digitalRead(14) == 0) { //
    Keyboard.write(KEY_NUM_LOCK);  // send Hex value for num lock
    delay(200);
  }
  
  Keyboard.end();                 //stops keyboard
}
