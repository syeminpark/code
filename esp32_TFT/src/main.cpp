#include "lib.h"

void menu();

void setup()
{
  init();
  welcome();
}
void loop()
{
  welcomeClose();
  httpGet();
  if (welcomeClose())
  {
    menu();
  }
}

void menu()
{

  tft.setCursor(0, 0);
  tft.setTextSize(3);
  tft.setTextColor(ILI9341_WHITE);
  // tft.drawRGBBitmap(0, 0, (uint16_t *)koreaMap.pixel_data, koreaMap.width, koreaMap.height);
  tft.println("Ansan");
  tft.println("Daegu");
  tft.println("Seoul");
}
