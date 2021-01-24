#ifndef version_h
#define version_h

void Version(){
display.clearDisplay();
display.setTextSize(1);
display.setTextColor(BLACK,WHITE);
display.setCursor(40, 0);
display.println(" Version ");
}


#endif
