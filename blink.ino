void setup()
{
   pinMode(LED_BUILTIN, OUTPUT);
   Serial.begin(115200);
   while (!Serial)
      ;
}

void loop()
{
   if (Serial.available()){
      String inputString = Serial.readString();
          Serial.println(inputString);
   }
   digitalWrite(LED_BUILTIN, HIGH);
   delay(100);
   digitalWrite(LED_BUILTIN, LOW);
   delay(100);
}
