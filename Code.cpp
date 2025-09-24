String password = "ABCDEF"; //Desired password

void setup() {
  Serial.begin(9600); //begin the conversation
}

void loop() {
  Serial.println("Please enter your password: "); //Enter the first command to the user

  while(Serial.available() == 0){ //so long as no input keep here
    }

  String input = Serial.readString(); //Store input here

  if(input == password){ //If input is the same as password, print password correct
    Serial.println("Password correct");
  }
    else
      Serial.println("Password incorrect"); //else incorrect
}
