#include <Keypad.h>


String correctPassword = "1234";


int relayPin = 10;


const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);



String enteredPassword = "";
bool relayState = false;



void setup() {
  Serial.begin(9600);

  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); 

  Serial.println("Enter Password:");
}


void loop() {
  char key = keypad.getKey();

  if (key) {
    Serial.print("Key Pressed: ");
    Serial.println(key);

  
    if (key == '*') {
      enteredPassword = "";
      Serial.println("Cleared!");
    }

    else if (key == '#') {
      checkPassword();
      enteredPassword = "";
    }

  
    else {
      enteredPassword += key;
    }
  }
}



void checkPassword() {
  Serial.print("Entered: ");
  Serial.println(enteredPassword);

  if (enteredPassword == correctPassword) {
    Serial.println("Access Granted");

    relayState = !relayState;
    digitalWrite(relayPin, relayState ? HIGH : LOW);

    if (relayState)
      Serial.println("Relay ON (Light ON)");
    else
      Serial.println("Relay OFF (Light OFF)");
  } 
  else {
    Serial.println("Access Denied");
  }
}