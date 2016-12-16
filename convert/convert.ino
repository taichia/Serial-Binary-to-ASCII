int counter = 0;
int decode_pointer = 0;
int buff[256];
byte x = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  Serial.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == LOW && counter != 8){
    buff[counter] = 1;
    counter++;
    x = x << 1 | 1;
    Serial.print("Updated: ");
    for(int i = 0; i < counter; i++){
      Serial.print(buff[i]);
    }
    Serial.println();
  }
  else if(digitalRead(5) == LOW && counter != 8){
    buff[counter] = 0;
    counter++;
    x = x << 1;
    Serial.print("Updated: ");
    for(int i = 0; i < counter; i++){
      Serial.print(buff[i]);
    }
    Serial.println();
  }
  else if(digitalRead(8) == LOW){
    if(counter != 0){
      counter--;
    x = (unsigned)x >> 1;
    Serial.print("Updated: ");
    for(int i = 0; i < counter; i++){
      Serial.print(buff[i]);
    }
    Serial.println();
    }
  }
  else if(digitalRead(11) == LOW){
    Serial.print("Decoded: ");
    Serial.write(x);
    Serial.println();
  }
  delay(100);

}
