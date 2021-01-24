#ifndef welcome_h
#define welcome_h

void welcome(){
  

display.clearDisplay();
display.setTextSize(2); // Draw 2X-scale text
display.setTextColor(WHITE);
display.setCursor(30, 0);
display.println("Syemins");
display.setCursor(30, 17);
display.println(" Clock");
display.display();
delay(5000);
}

#endif
