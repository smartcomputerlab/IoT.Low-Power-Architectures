uint32_t chipId = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i=0; i<17; i=i+8) 
  {
  chipId |= ((ESP.getEfuseMac() >> (40 - i)) & 0xff) << i;
  }
  Serial.printf("ESP32 Chip model = %s Rev %d\n", ESP..., ESP.getChipRevision());
  Serial.printf("This chip has %d cores\n", ESP...);
  Serial.print("Chip ID: "); Serial.println(chipId);
  delay(3000);
}
