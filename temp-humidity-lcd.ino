#include <LiquidCrystal.h>
#include <DHT.h>

#define DHT_PIN 6
#define DHT_TYPE DHT11  

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  lcd.begin(16, 2);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();

  lcd.setCursor(0, 0);
  lcd.print("Temp: " + String(t) + " C");

  delay(2000);
}
