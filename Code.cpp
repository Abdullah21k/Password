String password = "ABCDEF";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Please enter your password: ");

  while(Serial.available() == 0){
    }

  String input = Serial.readString();

  if(input == password){
    Serial.println("Password correct");
  }
    else
      Serial.println("Password incorrect");
}
