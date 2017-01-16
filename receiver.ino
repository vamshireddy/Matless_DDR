int g_UpButtonPin =  9;
int g_DownButtonPin =  10;
int g_LeftButtonPin =  11; 
int g_RightButtonPin =  12;

void setup() {
  pinMode(g_UpButtonPin, INPUT);
  pinMode(g_DownButtonPin, INPUT);
  pinMode(g_LeftButtonPin, INPUT);
  pinMode(g_RightButtonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  for (int i = g_UpButtonPin; i <= g_RightButtonPin; i++) {
    if (digitalRead(i) == LOW) // Active low
      Serial.print('1');  
    else
      Serial.print('0');
    Serial.print('\0');
  }
  Serial.println();
  Serial.flush();
  delay(10);
}
