#ifndef mainMenu_h
#define mainMenu_h

void mainMenu(){
display.clearDisplay();
display.setTextSize(1);
display.setTextColor(BLACK,WHITE);
display.setCursor(90, 0);
display.println(" MENU ");
display.drawRect(0, ypos[counter], 80, 9, WHITE);
display.setTextColor(WHITE);
display.println("-Time Setting");
display.println("-Version");
display.println("-Alarm");
}


#endif
