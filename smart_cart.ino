// 🛒 Smart Shopping Cart
// Arduino-based Embedded System Project

#include <LiquidCrystal.h>

// LCD pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float totalCost = 0;

void setup() {
  lcd.begin(16, 2);

  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("Smart Cart");
  lcd.setCursor(0, 1);
  lcd.print("Ready...");
  
  delay(2000);
  lcd.clear();
}

void loop() {

  // Sample product simulation
  // Later we will connect RFID module here

  String product = "Milk";
  float price = 30.0;

  lcd.setCursor(0, 0);
  lcd.print(product);

  lcd.setCursor(0, 1);
  lcd.print("Rs:");
  lcd.print(price);

  totalCost += price;

  Serial.print("Product: ");
  Serial.println(product);

  Serial.print("Total Cost: ");
  Serial.println(totalCost);

  delay(5000);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Total:");
  lcd.print(totalCost);

  delay(3000);

  lcd.clear();
}
