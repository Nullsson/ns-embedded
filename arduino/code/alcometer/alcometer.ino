#include <LiquidCrystal.h>

LiquidCrystal Screen(0, 1, 8, 9, 10, 11);
const int SpeakerPin = 5;

static int AlcoholValue;

void setup()
{
  Screen.begin(16, 2);
  pinMode(SpeakerPin, OUTPUT);
}

void loop()
{
  AlcoholValue = analogRead(0);

  if (AlcoholValue > 200)
  {
    tone(SpeakerPin, 1000);
    delay(1000);
    noTone(SpeakerPin);
  }
  
  Screen.print("Alcohol Value");
  Screen.setCursor(0, 1);
  Screen.print(AlcoholValue);

  delay(750);
  Screen.setCursor(0, 0);
}
